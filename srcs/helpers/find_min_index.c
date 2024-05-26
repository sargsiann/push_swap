/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:22:29 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/26 17:33:08 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_min_index(t_node **stack)
{
	int		min;
	int		index;
	int		i;
	t_node	*tmp;

	min = 2147483647;
	index = 0;
	tmp = *stack;
	i = 0;
	while (tmp)
	{
		if (tmp->value < min)
		{
			min = tmp->value;
			index = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (index);
}