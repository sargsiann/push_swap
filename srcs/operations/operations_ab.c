/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:43:33 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/12 18:38:58 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void ss(t_node **a, t_node **b)
{
	sa(a);
	sb(b);
	write(1, "ss\n", 3);
}

void rr(t_node **a, t_node **b)
{
	ra(a);
	rb(b);
	write(1, "rr\n", 3);
}

void rrr(t_node **a, t_node **b)
{
	rra(a);
	rrb(b);
	write(1, "rrr\n", 4);
}
