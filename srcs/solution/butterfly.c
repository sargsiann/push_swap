/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   butterfly.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:55:01 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/31 17:15:33 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static	int	*fill_and_sort_arr(t_node **a)
{
	t_node	*tmp;
	int		i;
	int		*arr;

	arr = malloc(sizeof(int) * stack_size(a));
	i = 0;
	tmp = *a;
	while (i < stack_size(a))
	{
		arr[i] = tmp->value;
		i++;
		tmp = tmp->next;
	}
	bubble_sort(arr, stack_size(a));
	return (arr);
}

static void	push_from_b_to_a(t_node **b, t_node **a)
{
	while ((*b))
	{
		push_val_to_stack(b, find_max_index(b), 0);
		pa(a, b, 1);
	}
}

static void	init(t_node **a, int *j, int **arr, int *i)
{
	*j = 0;
	*i = square_root(stack_size(a)) + logarithm2(stack_size(a));
	(*arr) = fill_and_sort_arr(a);
}

static void	logic(t_node **a, t_node **b, int *arr)
{
	push_from_b_to_a(b, a);
	free(arr);
}

void	butterfly_sort(t_node **a, t_node **b, int len)
{
	int	*arr;
	int	i;
	int	j;

	init(a, &j, &arr, &i);
	while (stack_size(a) > 0 && j < len)
	{
		if ((*a)->value <= arr[j])
		{
			pb(a, b, 1);
			j++;
		}
		else if ((*a)->value <= arr[j + i])
		{
			pb(a, b, 1);
			rb(b, 1);
			j++;
		}
		else
			ra(a, 1);
		if (j + i >= len)
			i--;
	}
	logic(a, b, arr);
}
