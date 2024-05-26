/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubles.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 14:28:49 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/26 15:40:59 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int check_for_index(t_node **stack, int val, int index)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->value == val && i != index)
			return (0);
		i++;
		tmp = tmp->next;
	}
	return (1);
}

int	check_for_doubles(t_node **stack)
{
	int		i;
	t_node	*tmp;
	
	i = 0;
	tmp = *stack;
	if (tmp->next == NULL)
		return (1);
	while (tmp)
	{
		if (!check_for_index(stack, tmp->value, i))
		{
			free_stack(stack);
			return (0);
		}
		i++;
		tmp = tmp->next;
	}
	return (1);
}