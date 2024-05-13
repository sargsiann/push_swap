/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 14:49:05 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/13 17:48:15 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_node **a, t_node **b)
{
	t_node *a_tmp;

	a_tmp = NULL;
	if (!a || !b || !*a)
		return ;
	a_tmp = *a;
	*a = (*a)->next;
	a_tmp->next = *b;
	*b = a_tmp;

	write(1, "pb\n", 3);
}

void	sb(t_node **b)
{
	int	tmp;

	tmp = 0;
	if (!b || !(*b)->next)
		return ;
	tmp = (*b)->val;
	(*b)->val = (*b)->next->val;
	(*b)->next->val = tmp;
	write(1, "sb\n", 3);
}

void	rb(t_node **b)
{
	t_node	*t;
	int		tmp;

	t = NULL;
	tmp = 0;
	if (!b || !(*b)->next)
		return ;
	tmp = (*b)->val;
	t = *b;
	while (1)
	{
		if (t->next == NULL)
		{
			t->val = tmp;
			break;
		}
		t->val = t->next->val;
		t = t->next;
	}
	write(1, "rb\n", 3);
}

void	rrb(t_node **b)
{
	t_node	*t;
	t_node	*tmp;
	int		tmp_val;

	t = NULL;
	tmp = NULL;
	tmp_val = 0;
	if (!b || !(*b)->next)
		return ;
	t = *b;
	tmp = *b;
	while (1)
	{
		if (t->next == NULL)
		{
			t->val = tmp_val;
			break;
		}
		if (t->next->next == NULL)
		{
			tmp_val = t->val;
			t->val = t->next->val;
			t->next->val = tmp_val;
			break;
		}
		t = t->next;
	}
	write(1, "rrb\n", 4);
}