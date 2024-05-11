/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort_for_4.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:08:33 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/11 20:11:57 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	tiny_sort_for_4(t_node **a, t_node **b)
{
	int	min_index;

	min_index = find_smallest_node(a);
	push_smallest_to_b(a, b, min_index);
	tiny_sort_for_3(a);
	pb(a, b);
}