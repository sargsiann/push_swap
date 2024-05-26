/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:54:21 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/26 17:05:39 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb(t_node **a, t_node **b, int print) // PUSHES TOP ELEMENT OF A TO B OK
{
	t_node	*tmp;

	if (!a || !(*a))
		return ;
	tmp = (*a)->next;
	(*a)->next = *b;
	*b = *a;
	*a = tmp;
	if (print)
		write(1, "pb\n", 3);
}

void	sb(t_node **b, int print) // SWAPS TOP TWO ELEMENTS OF B OK
{
	t_node	*tmp;

	if (!b || !(*b) || !(*b)->next)
		return ;
	tmp = (*b)->next;
	(*b)->next = tmp->next;
	tmp->next = *b;
	*b = tmp;
	if (print)
		write(1, "sb\n", 3);
}

void	rb(t_node **b, int print) // FIRST ELEMENT BECOME LAST ONE OK
{
	t_node	*tmp;
	t_node	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	last = *b;
	while (last->next)
		last = last->next;
	last->next = tmp;
	tmp->next = NULL;
	if (print)
		write(1, "rb\n", 3);
}

void	rrb(t_node **b, int print) // LAST ELEMENT BECOME FIRST ONE OK
{
	t_node	*tmp;
	t_node	*last;

	if (!b || !(*b) || !(*b)->next)
		return ;
	tmp = *b;
	last = *b;
	while (last->next->next)
		last = last->next;
	last->next->next = tmp;
	*b = last->next;
	last->next = NULL;
	if (print)
		write(1, "rrb\n", 4);
}