/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:41:50 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/17 11:28:53 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	solve(t_node **a, t_node **b)
{
	t_node *tmp;

	tmp = NULL;
	if (stack_size(a) == 2)
	{
		tmp = *a;
		if (tmp->val > tmp->next->val)
			sa(a, 1);
	}
	else if (stack_size(a) == 3)
		tiny_sort_for_3(a);	
	else if (stack_size(a) == 4)
		tiny_sort_for_4(a, b);
	else if (stack_size(a) == 5)
		tiny_sort_for_5(a, b);
	else
		butterfly_sort(a, b);
}