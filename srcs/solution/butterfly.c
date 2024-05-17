/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:09:47 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/17 19:27:11 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	fill_array(int *array, t_node **a)
{
	t_node	*tmp;
	int		i;

	if (!array)
		return 0;
	i = 0;
	tmp = *a;
	while (tmp)
	{
		array[i] = tmp->val;
		tmp = tmp->next;
		i++;
	}
	bubble_sort(array, stack_size(a) - 1);
	return 1;
}

static int find_max(t_node **b)
{
	t_node	*tmp;
	int		max;
	int		i;
	int		index;

	tmp = *b;
	max = tmp->val;
	i = 0;
	index = 0;
	while (tmp)
	{
		if (tmp->val > max)
		{
			max = tmp->val;
			index = i;
		}
		tmp = tmp->next;
		i++;
	}
	return index;
}

static void	from_b_to_a(t_node **a, t_node **b)
{
	while (*b)
		push_val_to_stack_a(b, a, find_max(b));
}

void	 butterfly_sort(t_node **a, t_node **b)
{
	int	*array;
	int	i;
	
	i = square_root(stack_size(a)) + log_base_2(stack_size(a)) - 1;
	array = (int *)malloc(sizeof(int) * stack_size(a));
	if (!fill_array(array, a))
		return ;
	while (stack_size(a) > 0)
	{
		if (i >= stack_size(a))
			i--;
		if ((*a)->val <= array[i])
		{
			pb(a, b, 1);
			i++;
		}
		else if ((*a)->val <= array[i + 1])
		{
			pb(a, b, 1);
			rb(b, 1);
			i++;
		}
		else
			ra(a, 1);
	}
	print_stack(b);
	from_b_to_a(a, b);
	free(array);
}