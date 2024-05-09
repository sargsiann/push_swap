/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 18:42:29 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/06 20:18:29 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_node **a, t_node **b)
{
	t_node *a_tmp;

	a_tmp = NULL;
	if (!a || !b || !(*a))
		return ;
	a_tmp = *a;
	*a = (*a)->next;
	a_tmp->next = *b;
	*b = a_tmp;
}

void sb(t_node **b)
{
	int	tmp;

	tmp = 0;
	if (!b || (*b) || !(*b)->next)
		return ;
	tmp = (*b)->val;
	(*b)->val = (*b)->next->val;
	(*b)->next->val = tmp;
}

void rb(t_node **b)
{
	t_node	*t;

	t = NULL;
	if (!b || !(*b) || !(*b)->next)
		return ;
	t = *b;
	*b = (*b)->next;
	while (1)
	{
		if (t->next == NULL)
		{
			t->next = *b;
			*b = t;
			break;
		}
		t = t->next;
	}
}

void rrb(t_node **b)
{
	t_node	*t;
	t_node	*tmp;

	tmp = NULL;
	t = NULL;
	if (!b || !(*b)->next)
		return ;
	t = *b;
	*b = (*b)->next;
	tmp = *b;
	while (1)
	{
		if (t->next->next == NULL)
		{
			tmp = t->next;
			t->next = NULL;
			tmp->next = *b;
			*b = tmp;
			break;
		}
		t = t->next;
	}
}