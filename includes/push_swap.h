/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:15:39 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/26 17:05:21 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "gnl.h"
# include "libft.h"
# include <stdio.h>

typedef struct s_node 
{
	int				value;
	struct  s_node	*next;
}	t_node;

int		validate_argv(char **argv);
int		is_valid(char **argv);
int		is_integer(char **argv);
int		move(char *str, int i);
void	fill_stack_a(t_node **a, char **argv);
int		check_for_doubles(t_node **a);
void	print_stack(t_node **a);
void	free_stack(t_node **stack);
int		stack_size(t_node **stack);
void	pa(t_node **a, t_node **b, int flag);
void	sa(t_node **a, int flag);
void	ra(t_node **a, int flag);
void	rra(t_node **a, int flag);
void	pb(t_node **a, t_node **b, int flag);
void	sb(t_node **b, int flag);
void	rb(t_node **b, int flag);
void	rrb(t_node **b, int flag);
void	ss(t_node **a, t_node **b, int flag);
void	rr(t_node **a, t_node **b, int flag);
void	rrr(t_node **a, t_node **b, int flag);
int		is_sorted(t_node **a);


#endif