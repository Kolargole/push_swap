/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:41:03 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/15 17:59:09 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
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

int	*parser(int argc, char **argv)
{
	int	i;
	int	*stack_a;

	i = 0;
	stack_a = ft_calloc(argc, sizeof(int));
	while (i < argc - 1)
	{
		stack_a[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	return (stack_a);
}

int	error_check(int argc, char **argv)
{
	if (argc <= 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (!is_integer(argv))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (1);
}
