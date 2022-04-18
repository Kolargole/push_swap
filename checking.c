/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:19:08 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/19 01:24:16 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *stack)
{
	int	i;

	i = 1;
	while (stack[i])
	{
		if (stack[i - 1] > stack[i])
			return (0);
		i++;
	}
	return (1);
}

int	is_integer(char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argv[i])
	{
		if (argv[i][j] == '-')
			j++;
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
				free(stack_a);
				return (1);
			}
			j++;
		}
		i++;
		j = i;
	}
	return (0);
}

int	is_in_range(int n, int start, int end)
{
	if (n > start && n <= end)
		return (1);
	else
		return (0);
}
