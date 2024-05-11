/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:00:57 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/11 20:01:52 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int stack_size(t_node **stack)
{
	int		i;	
	t_node *tmp;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

int is_sorted(t_node **a)
{
	t_node *tmp;

	tmp = *a;
	while (tmp->next)
	{
		if (tmp->val > tmp->next->val)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int find_smallest_node(t_node **a)
{
	t_node *tmp;
	int		i;
	int		smallest;
	int		index;

	tmp = *a;
	i = 0;
	smallest = tmp->val;
	index = 0;
	while (tmp)
	{
		if (tmp->val < smallest)
		{
			smallest = tmp->val;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (index);
}

void	push_smallest_to_b(t_node **a, t_node **b, int index)
{	
	int smallest;
	t_node *tmp;
	int		i;

	tmp = *a;
	i = 0;
	smallest = 0;
	while (tmp)
	{
		if (i == index)
		{
			smallest = tmp->val;
			break ;
		}
		i++;
		tmp = tmp->next;
	}
	while (1)
	{
		if ((*a)->val == smallest)
			break;
		if (index <= stack_size(a) / 2)
			ra(a);
		else
			rra(a);
	}
	pa(a, b);
}