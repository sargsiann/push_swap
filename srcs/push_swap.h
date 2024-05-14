/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:44:33 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/14 17:16:54 by dasargsy         ###   ########.fr       */
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
void	free_stack(t_node **a);
void	solve(t_node **a, t_node **b);
void	tiny_sort_for_3(t_node **a);
void	tiny_sort_for_4(t_node **a, t_node **b);
int		stack_size(t_node **stack);
int     is_sorted(t_node **a);
int		find_smallest_node(t_node **a);
void	push_smallest_to_b(t_node **a, t_node **b, int min_index);
void	tiny_sort_for_5(t_node **a, t_node **b);
void	butterfly_sort(t_node **a, t_node **b);
t_node	*last_node(t_node *node);

# endif