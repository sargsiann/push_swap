/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:27:23 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/04 20:56:00 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	fill_a(char **argv, t_node *a)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			i++;	
		}
	}
}

void	fill_stacks(char **argv, t_node *a, t_node *b)
{
	a = malloc(sizeof(t_node));
	b = malloc(sizeof(t_node));
}