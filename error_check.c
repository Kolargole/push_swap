/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:41:03 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/11 01:14:10 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_integer(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		i++;
		j = 0;
	}
	return (1);
}

int	is_duplicate(int *stack_a)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (stack_a[i - 1])
	{
		while (stack_a[j])
		{
			if (stack_a[i - 1] == stack_a[j])
			{
				write(1, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
		j = i;
	}
	return (0);
}

int error_check(int argc, char **argv)
{
	if (argc <= 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if(!is_integer(argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
    return (1);
}
