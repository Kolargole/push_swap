/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:21:52 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/20 16:39:33 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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

int	*indexing(int argc, int *stack_a)
{
	int		i;
	int		*stack_i;
	t_min	min;

	stack_i = ft_calloc(argc, sizeof(int));
	min.laps = 1;
	min.save = find_min(stack_a, argc - 1) - 1;
	while (min.laps < argc)
	{
		i = 0;
		min.value = find_max(stack_a, argc - 1) + 1;
		while (i < argc - 1)
		{
			if (stack_a[i] < min.value && stack_a[i] > min.save)
			{
				min.value = stack_a[i];
				min.index = i;
			}
			i++;
		}
		stack_i[min.index] = min.laps;
		min.save = min.value;
		min.laps++;
	}
	return (stack_i);
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

void	free_stack(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
}
