/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort_for_5.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 20:05:07 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/17 18:31:57 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	tiny_sort_for_5(t_node **a, t_node **b)
{
	int	min_index;

	min_index = find_smallest_node(a);
	push_val_to_stack(a, b, min_index);
	if (is_sorted(a) == 1)
		return ;
	tiny_sort_for_4(a, b);
	pa(a, b, 1);
}