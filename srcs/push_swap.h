/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:44:33 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/04 20:49:25 by dasargsy         ###   ########.fr       */
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
void	fill_stacks(char **argv, t_node *b, t_node *a);


# endif