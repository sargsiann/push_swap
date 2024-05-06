/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 17:27:38 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/06 17:29:03 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node *new_node(int number)
{
	t_node *node;

	node = malloc(sizeof(t_node));
	node->val = number;
	node->next = NULL;
	return (node);
}