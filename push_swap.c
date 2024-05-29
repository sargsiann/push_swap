/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:14:55 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/29 16:49:38 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	if (!validate_argv(argv))
	{
		write(2, "Error", 5);
		return (1);
	}
	fill_stack_a(&a, argv);
	if (!check_for_doubles(&a))
	{
		write(2, "Error", 5);
		return (1);
	}
	solve(&a, &b);
	return (0);
}