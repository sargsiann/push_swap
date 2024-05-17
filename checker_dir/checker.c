/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:31:20 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/17 14:53:31 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	read_commands(t_node **a, t_node **b)
{
	char *paramm;

	paramm = NULL;
	while (1)
	{
		paramm = get_next_line(0);
		if (!ft_strncmp(paramm, "sa\n", 3))
			sa(a, 0);
		else if (!ft_strncmp(paramm, "sb\n", 3))
			sb(b, 0);
		else if (!ft_strncmp(paramm, "ss\n", 3))
			ss(a, b, 0);
		else if (!ft_strncmp(paramm, "pa\n", 3))
			pa(a, b, 0);
		else if (!ft_strncmp(paramm, "pb\n", 3))
			pb(a, b, 0);
		else if (!ft_strncmp(paramm, "ra\n", 3))
			ra(a, 0);
		else if (!ft_strncmp(paramm, "rb\n", 3))
			rb(b, 0);
		else if (!ft_strncmp(paramm, "rr\n", 3))
			rr(a, b, 0);
		else if (!ft_strncmp(paramm, "rra\n", 4))
			rra(a, 0);
		else if (!ft_strncmp(paramm, "rrb\n", 4))
			rrb(b, 0);
		else if (!ft_strncmp(paramm, "rrr\n", 4))
			rrr(a, b, 0);
		else if (!ft_strncmp(paramm, "\n",1))
			break ;
		else
		{
			write(1, "Error\n", 6);
			return ;
		}
	}
	if (is_sorted(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	t_node	*a;
	t_node	*b;

	a = NULL;
	b = NULL;
	if (argc > 1 && validate_argv(argv))
	{
		fill_stack_a(&a, argv);
		if (!check_for_dublicates(&a))
		{
			write(2, "Error\n", 6);
			free_stack(&a);
			return (1);
		}
		read_commands(&a, &b);
	}
	else
	{
		write(2, "Error\n", 6);
		return (0);
	}
	free_stack(&a);
	free_stack(&b);
	return (0);
}