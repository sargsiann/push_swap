/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invalid.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:04:25 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/31 16:38:49 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static int	statement(char c)
{
	if (ft_isdigit(c) == 0 && c != 32 && c != 45 && c != 43)
		return (0);
	return (1);
}

static int	condition(char **argv, int i, int j)
{
	if (!statement(argv[i][j]))
		return (0);
	if ((argv[i][j] == '-' || argv[i][j] == '+')
		&& ft_isdigit(argv[i][j + 1]) == 0)
		return (0);
	if (argv[i][j] == 32 && (!statement(argv[i][j + 1])
		|| argv[i][j + 1] == 32))
		return (0);
	if ((argv[i][j] == 43 || argv[i][j] == 45) &&
		(j - 1 != -1 && argv[i][j - 1] != 32))
		return (0);
	return (1);
}

int	is_valid(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		if (argv[i][j] == 0)
			return (0);
		while (argv[i][j])
		{
			if (!condition(argv, i, j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
