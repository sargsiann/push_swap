/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:09:47 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/14 20:29:25 by dasargsy         ###   ########.fr       */
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
		if (tmp->val == smallest)
			return (i);
		i++;
	}
	return (-1);
}

static int includes(int *array, int val, t_node **a)
{
	int i;

	i = 0;
	while (i < stack_size(a))
	{
		if (array[i] == val)
			return (1);
		i++;
	}
	return (0);
}

static void	fill_array(int *array, t_node **a)
{
	t_node	*tmp;
	int		i;
	int		smallest;

	i = 0;
	tmp = *a;
	while (tmp)
	{
		smallest = find_smallest_n_val(&tmp, find_smallest_node(&tmp));
		if (!includes(array, smallest, a))
			array[i] = smallest;
		tmp = tmp->next;
		i++;
	}
}

static void	from_b_to_a(t_node **a, t_node **b)
{
	while (*b)
	{
		if ((*b)->val < last_node(*b)->val)
			rrb(b);
		pa(a, b);
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
	while (stack_size(a) > 0)
	{
		if ((*a)->val <= array[i])
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->val <= array[i] + offset)
		{
			pb(a, b);
			rb(b);
			i++;
		}
		else
			ra(a);
	}
	from_b_to_a(a, b);
	free(array);
}