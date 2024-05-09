/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:27:23 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/09 20:24:43 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int move(char *argument)
{
	int	i;

	i = 0;
	while (argument[i] == 43 
		|| argument[i] == 45 || ft_isdigit(argument[i]))
		i++;
	return (i);
}

static void add_member(t_node **a, int data)
{
	t_node *node;
	t_node *tmp;

	node = new_node(data);
	tmp = NULL;
	if (!node)
		return ;
	tmp = *a;
	if (*a == NULL)
	{
		*a = node;
		return ;
	}
	while (1)
	{
		if (tmp->next == NULL)
		{
			tmp->next = node;
			break ;
		}
		tmp = tmp->next;
	}
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
				add_member(a,ft_atoi(argv[i] + j));
				j += move(argv[i] + j);
				if (argv[i][j] == 0)
					break ;
			}
			j++;
		}
		i++;
	}
	print_stack(a);
}