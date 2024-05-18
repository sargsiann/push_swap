/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 18:36:54 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/18 16:41:26 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	bubble_sort(int *array, int size)
{
	int tmp;
	int i;
	int flag;

	i = 0;
	flag = 1;
	tmp = 0;
	while (flag)
	{
		flag = 0;
		i = 0;
		while (i < size)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				flag = 1;
			}
			i++;
		}
	}
}