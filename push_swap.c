/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:44:16 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/17 13:53:48 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs/push_swap.h"

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