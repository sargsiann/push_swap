/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:43:46 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/07 20:11:06 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static	int check_by_lenght(char *digit_start)
{
	int	i;

	i = 0;
	while (digit_start[i] && 
		(ft_isdigit(digit_start[i]) || digit_start[i] == '-'))
		i++;
	if (i > 10)
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
			{
				write(2, "value is too big\n", 17);
				return (0);
			}
			i += move(argument + i);
			if (!argument[i])
				return (1);
		}
		i++;
	}
	return (1);
}