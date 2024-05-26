/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:03:54 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/26 17:47:55 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_four(t_node **a, t_node **b)
{
	int	min;

	min = find_min_index(a);
	push_val_to_stack(a, b, min, 1);
	if (is_sorted(a))
	{
		pb(a, b, 1);
		return ;
	}
	sort_three(a);
	pb(a, b, 1);
}

void	sort_three(t_node **a)
{
	int	max_index;

	max_index = find_max_index(a);
	if (max_index == 0)
	{
		ra(a,1);
		if ((*a)->value > (*a)->next->value)
			sa(a,1);
	}
	if (max_index == 1)
	{
		rra(a,1);
		if ((*a)->value > (*a)->next->value)
			sa(a,1);
	}
	if (max_index == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a,1);
	}
}

void	solve(t_node **a, t_node **b)
{
	if (is_sorted(a))
		return ;
	if (stack_size(a) == 2)
	{
		if ((*a)->value > (*a)->next->value)
			sa(a,1);
		return ;
	}
	if (stack_size(a) == 3)
	{
		sort_three(a);
		return ;
	}
}