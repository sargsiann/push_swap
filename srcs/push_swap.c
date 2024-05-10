/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:44:16 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/10 14:48:55 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_node **a)
{
	t_node *tmp;

	tmp = *a;
	while (tmp)
	{
		printf("%d\n", tmp->val);
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
		print_stack(&a);
		// sa(&a); swapping is okay
		printf("\n\n\n");
		//ra(&a); rotating is okay
		//rra(&a); reverse rotating is okay
		//print_stack(&a);

		if (!check_for_dublicates(&a))
			return (1);
		printf("OK");
	}
	else
		return (1);
}