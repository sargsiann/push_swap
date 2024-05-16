/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:09:47 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/16 19:31:16 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	fill_array(int *array, t_node **a)
{
	t_node	*tmp;
	int		i;

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
			rrb(b);
		pa(a, b);
	}
}

void	 butterfly_sort(t_node **a, t_node **b)
{
	int	*array;
	int	i;
	
	array = malloc(sizeof(int) * stack_size(a));
	i = square_root(stack_size(a)) + log_base_2(stack_size(a));
	if (!fill_array(array, a))
		return ;
	while (stack_size(a) > 0)
	{
		i = square_root(stack_size(a)) + log_base_2(stack_size(a));
		if (i >= stack_size(a))
			i = stack_size(a) - 1;
		if ((*a)->val <= array[i])
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->val <= array[i])
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else
			ra(a);
	}
	from_b_to_a(a, b);
	free(array);
}