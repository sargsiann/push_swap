/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_val_to_stack.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:41:06 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/31 16:40:01 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	find_val_by_index(t_node **stack, int index)
{
	int		i;
	t_node	*tmp;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		if (i == index)
			return (tmp->value);
		i++;
		tmp = tmp->next;
	}
	return (0);
}

void	push_val_to_stack(t_node **from, int index, int flag)
{
	int	val;

	val = find_val_by_index(from, index);
	if (index >= stack_size(from) / 2)
	{
		while ((*from)->value != val)
		{
			if (flag)
				rra(from, 1);
			else
				rrb(from, 1);
		}
	}
	else
	{
		while ((*from)->value != val)
		{
			if (flag)
				ra(from, 1);
			else
				rb(from, 1);
		}
	}
}
