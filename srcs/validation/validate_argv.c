/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasargsy <dasargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:51:40 by dasargsy          #+#    #+#             */
/*   Updated: 2024/05/12 17:41:13 by dasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int check_argument(char *argument)
{
	int	i;
	int num_flag;

	i = 0;
	num_flag = 0;
	while (argument[i])
	{
		if (ft_isdigit(argument[i]))
			num_flag++;
		if ((argument[i] == 45 && !ft_isdigit(argument[i + 1])) 
			|| (argument[i] == 43 && !ft_isdigit(argument[i + 1])))
			return (0);
		if (!ft_isdigit(argument[i]) && argument[i] != 32 
			&& argument[i] != 45 && argument[i] != 43)
			return (0);
		if (argument[i] == 32 && argument[i + 1] == 32)
			return (0);
		if ((argument[i] == 45 || argument[i] == 43) && (
			i -1 != -1 || argument[i - 1] != 32))
			return (0);
		i++;
	}
	if (!num_flag)
		return (0);
	return (1);
}

int	validate_argv(char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		//printf("argv[%d] = %s\n", i, argv[i]);
		if (!check_argument(argv[i]))
			return (0);
		if (!check_is_integer(argv[i]))
			return (0);
		i++;
	}
	return (1);
}