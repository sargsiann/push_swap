/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:13:20 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/31 16:39:20 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_max_index(t_node **stack)
{
	int		max;
	int		index;
	int		i;
	t_node	*tmp;

	max = 0;
	index = 0;
	tmp = *stack;
	i = 0;
	while (tmp)
	{
		if (tmp->value > max)
		{
			max = tmp->value;
			index = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (index);
}
