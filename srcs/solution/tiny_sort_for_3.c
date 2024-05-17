/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort_for_3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:54:47 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/17 11:24:55 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	tiny_sort_for_3(t_node **a)
{
	t_node *tmp;

	tmp = *a;
	if (tmp->val > tmp->next->val && tmp->val > tmp->next->next->val)
	{
		if (tmp->next->val > tmp->next->next->val)
		{
			ra(a, 1);
			sa(a, 1);
		}
		else
			ra(a, 1);
	}
	else if (tmp->val > tmp->next->val && tmp->next->val < tmp->next->next->val)
		sa(a, 1);
	else if (tmp->val < tmp->next->val)
	{
		if (tmp->val > tmp->next->next->val)
			rra(a, 1);
		else 
		{
			rra(a, 1);
			sa(a, 1);
		}
	}
}