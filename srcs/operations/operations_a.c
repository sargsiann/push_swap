/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:48:42 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/06 19:55:33 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **a, t_node **b)
{
	t_node *b_tmp;

	b_tmp = NULL;
	if (!a || !b || !(*b))
		return ;
	b_tmp = *b;
	*b = (*b)->next;
	b_tmp->next = *a;
	*a = b_tmp;
}

void	sa(t_node **a)
{
	int	tmp;

	tmp = 0;
	if (!a || !(*a)->next)
		return ;
	tmp = (*a)->val;
	(*a)->val = (*a)->next->val;
	(*a)->next->val = tmp;
}

void	ra(t_node **a)
{
	t_node	*t;

	t = NULL;
	if (!a || !(*a)->next)
		return ;
	t = *a;
	*a = (*a)->next;
	while (1)
	{
		if (t->next == NULL)
		{
			t->next = *a;
			*a = t;
			break;
		}
		t = t->next;
	}
}

void	rra(t_node **a)
{
	t_node	*t1;
	t_node	*t2;

	t1 = NULL;
	t2 = NULL;
	if (!a || !(*a)->next)
		return ;
	t1 = *a;
	*a = (*a)->next;
	t2 = *a;
	while (1)
	{
		if (t2->next == NULL)
		{
			t2->next = t1;
			break;
		}
	}
}