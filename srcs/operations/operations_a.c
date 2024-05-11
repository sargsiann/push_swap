/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:48:42 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/11 19:52:40 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **a, t_node **b) // okay
{
	t_node *a_tmp;

	if (!a || !b || !*a)
		return ;
	a_tmp = *a;
	*a = (*a)->next;
	a_tmp->next = *b;
	*b = a_tmp;
}

void	sa(t_node **a) // okay
{
	int	tmp;

	tmp = 0;
	if (!a || !(*a)->next)
		return ;
	tmp = (*a)->val;
	(*a)->val = (*a)->next->val;
	(*a)->next->val = tmp;
}

void	ra(t_node **a) // okay
{
	t_node	*t;
	int		tmp;

	t = NULL;
	tmp = 0;
	if (!a || !(*a)->next)
		return ;
	tmp = (*a)->val;
	t = *a;
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
}

void	rra(t_node **a) // okay
{
	t_node *t;
	t_node *tmp;

	t = NULL;
	tmp = NULL;
	if (!a || !(*a)->next)
		return ;
	tmp = *a;
	t = *a;
	while (1)
	{
		if (t->next->next == NULL)
		{
			tmp = t->next;
			t->next = NULL;
			tmp->next = *a;
			*a = tmp;
			break;
		}
		t = t->next;
	}
}