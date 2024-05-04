/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:44:16 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/04 20:37:09 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_node *a;
	t_node *b;
	
	if (argc > 1 && validate_argv(argv))
	{
		fill_stacks(argv, a, b);
		printf("OK");
	}
	else
	{
		write(2, "Invalid Arguments or no Argument", 33);
		return (1);
	}
}