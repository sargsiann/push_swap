/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:09:47 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/14 19:47:22 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"


static int	find_smallest_n_val(t_node **a, int smallest)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		if (i == smallest)
			return (tmp->val);
		i++;
	}
	return (-1);
}

static void	fill_array(int *array, t_node **a)
{
	t_node	*tmp;
	int		i;
	int		smallest;

	i = 0;
	tmp = *a;
	smallest = find_smallest_node(a);
	while (tmp)
	{
		array[i] = find_smallest_n_val(a, smallest);
		smallest = find_smallest_node(a);
		i++;
	}
}

void	 butterfly_sort(t_node **a, t_node **b)
{
	int	*array;
	int	offset;
	int	i;
	
	offset = 0;
	array = malloc(sizeof(int) * stack_size(a));
	i = 0;
	if (!array)
		return ;
	fill_array(array, a);
	while ((*a))
	{
		offset = stack_size(a);
		if ((*a)->val <= array[i])
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else if ((*a)->val <= array[i] + 1)
		{
			pb(a, b);
			i++;
		}
		else
			ra(a);
	}
	free(array);
}