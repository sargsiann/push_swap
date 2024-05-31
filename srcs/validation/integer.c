/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   integer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 11:50:53 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/31 16:36:15 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	check(char *str, int i)
{
	int	k;

	k = 0;
	if (ft_atoi(str) > INT_MAX || ft_atoi(str) < INT_MIN)
		return (0);
	if (str[i] == '-')
		i++;
	while (*(str) == '0')
	{
		str = str + k;
		k++;
	}
	k = 0;
	while (ft_isdigit((str[k])))
		k++;
	if (k > 10)
		return (0);
	return (1);
}

int	is_integer(char **argv)
{
	int	i;
	int	j;
	int	num_flag;

	i = 0;
	j = 0;
	num_flag = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			j++;
			if (ft_isdigit(argv[i][j]) || argv[i][j] == 43)
			{
				if (!check(argv[i], j))
					return (0);
				j += move(argv[i], j);
				if (argv[i][j] == 0)
					break ;
			}
		}
		i++;
	}
	return (1);
}
