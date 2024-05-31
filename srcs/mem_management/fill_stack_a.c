/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 13:03:46 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/31 16:40:22 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	add_element(t_node **a, int val)
{
	t_node	*node;
	t_node	*tmp;

	tmp = NULL;
	node = malloc(sizeof(t_node));
	node->value = val;
	node->next = NULL;
	if (!(*a))
	{
		*a = node;
		node->value = val;
		return ;
	}
	tmp = (*a);
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = node;
}

void	fill_stack_a(t_node **a, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-' || ft_isdigit(argv[i][j]))
			{
				add_element(a, ft_atoi(argv[i]));
				j += move(argv[i], j);
				if (argv[i][j] == 0)
					break ;
			}
			j++;
		}
		i++;
	}
}
