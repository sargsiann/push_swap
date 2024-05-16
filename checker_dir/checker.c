/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 19:31:20 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/16 19:59:05 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	read_commands(t_node **a, t_node **b)
{
	while (1)
	{
		if (!ft_strncmp(get_next_line(0), "sa",2))
			sa(a);
		else if (!ft_strncmp(get_next_line(0), "sb",2))
			sb(b);
		else if (!ft_strncmp(get_next_line(0), "ss",2))
			ss(a, b);
		else if (!ft_strncmp(get_next_line(0), "pa",2))
			pa(a, b);
		else if (!ft_strncmp(get_next_line(0), "pb",2))
			pb(a, b);
		else if (!ft_strncmp(get_next_line(0), "ra",2))
			ra(a);
		else if (!ft_strncmp(get_next_line(0), "rb",2))
			rb(b);
		else if (!ft_strncmp(get_next_line(0), "rr",2))
			rr(a, b);
		else if (!ft_strncmp(get_next_line(0), "rra",3))
			rra(a);
		else if (!ft_strncmp(get_next_line(0), "rrb",3))
			rrb(b);
		else if (!ft_strncmp(get_next_line(0), "rrr",3))
			rrr(a, b);
		else
			break ;
	}
	if (is_sorted(a))
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main()
{
	
}