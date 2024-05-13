/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:44:16 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/13 18:01:32 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node **a)
{
	t_node *tmp;

	tmp = *a;
	while (tmp)
	{
		printf("%d", tmp->val);
		tmp = tmp->next;
	}
}

int main(int argc, char **argv)
{
	t_node *a;
	t_node *b;
	
	a = NULL;
	b = NULL;
	if (argc > 1 && validate_argv(argv))
	{
		fill_stack_a(&a, argv);
		if (!check_for_dublicates(&a))
		{
			write(2, "Error\n", 6);
			return (1);
		}
		if (!is_sorted(&a))
			solve(&a, &b);
		//print_stack(&a);
		free_stack(&a);
		return (0);
	}
	else
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}