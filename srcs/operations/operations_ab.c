/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:43:33 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/17 11:26:38 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ss(t_node **a, t_node **b, int flag)
{
	sa(a, 0);
	sb(b, 0);
	if (flag)
		write(1, "ss\n", 3);
}

void rr(t_node **a, t_node **b, int flag)
{
	ra(a, 0);
	rb(b, 0);
	if (flag)
		write(1, "rr\n", 3);
}

void rrr(t_node **a, t_node **b, int flag)
{
	rra(a, 0);
	rrb(b, 0);
	if (flag)
		write(1, "rrr\n", 3);
}
