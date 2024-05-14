/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 15:21:05 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/13 20:13:17 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_node **a)
{
	t_node *tmp;
	t_node *next;

	tmp = *a;
	while (tmp)
	{
		next = tmp->next;
		free(tmp);
		tmp = next;
	}
	*a = NULL;
}