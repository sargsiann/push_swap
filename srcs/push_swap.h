/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:44:33 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/09 20:15:56 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H 
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdio.h>


typedef struct s_node
{
	int	val;
	struct s_node *next;
	
}	t_node;

int		validate_argv(char **argv);
void	ra(t_node **a);
void	rb(t_node **b);
void	rr(t_node **a, t_node **b);
void	rra(t_node **a);
void	rrb(t_node **b);
void	rrr(t_node **a, t_node **b);
void	sa(t_node **a);
void	sb(t_node **b);
void	ss(t_node **a, t_node **b);
void	pa(t_node **a, t_node **b);
void	pb(t_node **a, t_node **b);
t_node	*new_node(int number);
void	fill_stack_a(t_node **a, char **argv);
int		check_is_integer(char *argument);
int		check_for_dublicates(t_node **a);
int		move(char *argument);
void	print_stack(t_node **a);

# endif