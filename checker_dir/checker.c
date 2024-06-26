/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 20:54:24 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/31 16:45:20 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/checker.h"

static int	is_command(char *line)
{
	if (ft_strncmp(line, "sa\n", 3) != 0
		&& ft_strncmp(line, "sb\n", 3) != 0
		&& ft_strncmp(line, "ss\n", 3) != 0
		&& ft_strncmp(line, "pa\n", 3) != 0
		&& ft_strncmp(line, "pb\n", 3) != 0
		&& ft_strncmp(line, "ra\n", 3) != 0
		&& ft_strncmp(line, "rb\n", 3) != 0
		&& ft_strncmp(line, "rr\n", 3) != 0
		&& ft_strncmp(line, "rra\n", 4) != 0
		&& ft_strncmp(line, "rrb\n", 4) != 0
		&& ft_strncmp(line, "rrr\n", 4) != 0)
		return (0);
	return (1);
}

static void	ft_exec(char *line, t_node **a, t_node **b)
{
	if (!ft_strncmp(line, "sa\n", 3))
		sa(a, 0);
	else if (!ft_strncmp(line, "sb\n", 3))
		sb(b, 0);
	else if (!ft_strncmp(line, "ss\n", 3))
		ss(a, b, 0);
	else if (!ft_strncmp(line, "pa\n", 3))
		pa(a, b, 0);
	else if (!ft_strncmp(line, "pb\n", 3))
		pb(a, b, 0);
	else if (!ft_strncmp(line, "ra\n", 3))
		ra(a, 0);
	else if (!ft_strncmp(line, "rb\n", 3))
		rb(b, 0);
	else if (!ft_strncmp(line, "rr\n", 3))
		rr(a, b, 0);
	else if (!ft_strncmp(line, "rra\n", 4))
		rra(a, 0);
	else if (!ft_strncmp(line, "rrb\n", 4))
		rrb(b, 0);
	else if (!ft_strncmp(line, "rrr\n", 4))
		rrr(a, b, 0);
}

void	checker(t_node **a, t_node **b)
{
	char	*line;

	line = NULL;
	while (1)
	{
		line = get_next_line(0);
		if (line && is_command(line))
			ft_exec(line, a, b);
		else if (!line)
			break ;
		else if (!is_command(line))
		{
			write(2, "Error\n", 6);
			free(line);
			return ;
		}
		free(line);
	}
	free(line);
	if (is_sorted(a) && stack_size(b) == 0)
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
	if (argc == 1)
		return (0);
	if (!validate_argv(argv))
	{
		write(2, "Error", 5);
		return (1);
	}
	else
	{
		fill_stack_a(&a, argv);
		if (!check_for_doubles(&a))
		{
			write(2, "Error", 5);
			return (1);
		}
		checker(&a, &b);
		free_stack(&a);
		free_stack(&b);
	}
	return (0);
}
