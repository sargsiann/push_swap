/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:43:46 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/17 18:16:22 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int check_by_lenght(char *digit_start)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	while (digit_start[i] == '0')
		i++;
	while (digit_start[i + k] && 
		(ft_isdigit(digit_start[i + k]) || digit_start[i] == '-'))
		k++;
	if (k > 10)
		return (0);
	return (1);
}

static int check_by_value(char *argument)
{
	long	num;

	num = ft_atoi(argument);
	if (num > 2147483647 || num < -2147483648)
		return (0);
	return (1);
}


int	check_is_integer(char *argument)
{
	int	i;

	i = 0;
	while (argument[i])
	{
		if (argument[i] == '-' || ft_isdigit(argument[i]))
		{
			if (!check_by_lenght(argument + i) || !check_by_value(argument + i))
				return (0);
			i += move(argument + i);
			if (!argument[i])
				return (1);
		}
		i++;
	}
	return (1);
}