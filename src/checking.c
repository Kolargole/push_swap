/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:19:08 by vimercie          #+#    #+#             */
/*   Updated: 2022/06/05 16:51:42 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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

int	is_signed_int(char **argv)
{
	int	i;
	int	size;

	i = 1;
	while (argv[i])
	{
		size = ft_strlen(argv[i]);
		if (argv[i][0] != '-')
		{
			if (size > 10 || (size == 10 && ft_strcmp(argv[i], "2147483647") > 0))
				return (0);
		}
		else
		{
			if (size > 11 || (size == 11 && ft_strcmp(argv[i], "-2147483648") > 0))
				return (0);
		}
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
	return (is_signed_int(argv));
}

int	is_duplicate(char **argv)
{
	int		i;
	int		j;
	size_t	size;

	i = 1;
	j = 1;
	while (argv[i - 1])
	{
		size = ft_strlen(argv[i - 1]);
		while (argv[j])
		{
			if (size == ft_strlen(argv[j]) && ft_strcmp(argv[i - 1], argv[j]) == 0)
				return (1);
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
