/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:09:47 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/16 18:54:06 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	fill_array(int *array, t_node **a)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		array[i] = tmp->val;
		tmp = tmp->next;
		i++;
	}
	bubble_sort(array, stack_size(a) - 1);
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
	int	offset;
	int	i;
	
	offset = 0;
	array = malloc(sizeof(int) * stack_size(a));
	i = 0;
	if (!array)
		return ;
	fill_array(array, a);
	while (stack_size(a) > 0)
	{
		if ((*a)->val <= array[i])
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->val <= array[i] + offset)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else
			ra(a);
	}
	from_b_to_a(a, b);
	print_stack(a);
	free(array);
}