/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 15:48:01 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/29 18:29:19 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_node **a, t_node **b, int flag) // PUSH FROM TOP OF B TO TOP OF A OK
{
	t_node	*tb;

	tb = NULL;
	if (!b || !(*b))
		return ;
	tb = *b;
	*b = (*b)->next;
	(tb)->next = *a;
	(*a) = tb;
	if (flag)
		write(1, "pa\n", 3);
}

void	sa(t_node **a, int flag) // SWAPS TOP TWO ELEMENTS OF A OK
{
	int	tmp;
	
	tmp = 0;
	if (!(*a) || !a || !((*a)->next))
		return ;
	tmp = (*a)->value;
	(*a)->value = (*a)->next->value;
	(*a)->next->value = tmp;
	if (flag)
		write(1, "sa\n", 3);
}

void	ra(t_node **a, int flag) // FIRST ELEMENT BECOME LAST ONE OK
{
	t_node	*t1;
	t_node	*t2;

	t1 = NULL;
	t2 = NULL;
	if (!a || !(*a) || !(*a)->next)
		return ;
	t1 = (*a);
	(*a) = (*a)->next;
	t2 = (*a);
	while (t2->next != NULL)
		t2 = t2->next;
	t2->next = t1;
	t1->next = NULL;
	if (flag)
		write(1, "ra\n", 3);
}

void	rra(t_node **a, int flag) // LAST ELEMENT BECOMES FIRST OK
{
	t_node	*t1;
	t_node	*t2;

	t1 = NULL;
	t2 = NULL;
	if (!a || !(*a) || !(*a)->next)
		return ;
	t1 = (*a);
	while (t1->next->next != NULL)
		t1 = t1->next;
	t2 = t1->next;
	t1->next = NULL;
	t2->next = (*a);
	(*a) = t2;
	if (flag)
		write(1, "rra\n", 4);
}
