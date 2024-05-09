/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_for_dublicates.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 20:34:44 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/09 20:17:15 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int check_dublicates(t_node *node, t_node **a)
{
	t_node *tmp;

	tmp = *a;

	while (tmp != node)
	{
		if (tmp->val == node->val)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	check_for_dublicates(t_node **a)
{
	t_node *tmp;

	tmp = NULL;
	if (!a || !(*a))	
		return (0);
	tmp = *a;
	while (tmp)
	{
		if (!check_dublicates(tmp, a))
		{
			write(2, "Dublicates in arguments", 24);
			return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}	