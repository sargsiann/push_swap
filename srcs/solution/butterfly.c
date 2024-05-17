/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:09:47 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/17 13:34:52 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	fill_array(int *array, t_node **a)
{
	t_node	*tmp;
	int		i;

	array = malloc(sizeof(int) * stack_size(a));
	if (!array)
		return 0;
	i = 0;
	tmp = *a;
	while (tmp)
	{
		array[i] = tmp->val;
		tmp = tmp->next;
		i++;
	}
	bubble_sort(array, stack_size(a) - 1);
	return 1;
}

static void	from_b_to_a(t_node **a, t_node **b)
{
	while (*b)
	{
		if ((*b)->val < last_node(*b)->val)
			rrb(b,1);
		else
			pa(a, b, 1);
	}
}

void	 butterfly_sort(t_node **a, t_node **b)
{
	int	*array;
	int	i;
	
	i = square_root(stack_size(a)) + log_base_2(stack_size(a));
	array = NULL;
	if (!fill_array(array, a))
		return ;
	while (stack_size(a) > 0)
	{
		if (i >= stack_size(a))
			i = stack_size(a) - 1;
		if ((*a)->val <= array[i])
		{
			pb(a, b, 1);
			i++;
		}
		else if ((*a)->val <= array[i + 1])
		{
			pb(a, b, 1);
			rb(b, 1);
			i++;
		}
		else
			ra(a, 1);
	}
	from_b_to_a(a, b);
	free(array);
}