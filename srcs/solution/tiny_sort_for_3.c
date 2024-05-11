/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:54:47 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/11 18:03:55 by dasargsy         ###   ########.fr       */
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
			ra(a);
			sa(a);
		}
		else
			ra(a);
	}
	else if (tmp->val > tmp->next->val && tmp->next->val < tmp->next->next->val)
		sa(a);
	else if (tmp->val < tmp->next->val)
	{
		if (tmp->val > tmp->next->next->val)
			rra(a);
		else 
		{
			rra(a);
			sa(a);
		}
	}
}