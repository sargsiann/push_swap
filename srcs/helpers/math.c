/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:11:20 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/29 17:59:57 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	square_root(int num)
{
	int	i;

	i = 0;
	while (1)
	{
		if (i * i == num)
			return (i);
		else if (i * i > num)
			return (i - 1);
		i++;
	}
}

int	logarithm2(int num)
{
	int	i;

	i = 0;
	while (num)
	{
		num  = num / 2;
		i++;
	}
	return (i);
}