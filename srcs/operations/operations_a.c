/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:48:42 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/17 14:51:38 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_node **a, t_node **b, int flag) // okay
{
	t_node *b_tmp;

	b_tmp = NULL;
	if (!a || !*b || !b)
		return ;
	b_tmp = *b;
	*b = (*b)->next;
	b_tmp->next = *a;
	*a = b_tmp;
	
	if (flag)
		write(1, "pa\n", 3);
}

void	sa(t_node **a, int flag) // okay
{
	int	tmp;

	tmp = 0;
	if (!a || !(*a) || !(*a)->next)
		return ;
	tmp = (*a)->val;
	(*a)->val = (*a)->next->val;
	(*a)->next->val = tmp;
	if (flag)
		write(1, "sa\n", 3);
}

void	ra(t_node **a, int flag) // okay
{
	t_node	*t;
	int		tmp;

	t = NULL;
	tmp = 0;
	if (!a || !(*a) || !(*a)->next)
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
	if (flag)
		write(1, "ra\n", 3);
}

void	rra(t_node **a, int flag) // okay
{
	t_node *t;
	t_node *tmp;

	t = NULL;
	tmp = NULL;
	if (!a || !(*a) || !(*a)->next)
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
	if (flag)
		write(1, "rra\n", 4);
}