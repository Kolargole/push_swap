/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:21:52 by vimercie          #+#    #+#             */
/*   Updated: 2022/06/14 15:22:49 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	*parser(int argc, char **argv)
{
	int	i;
	int	*stack_a;
	int	*tmp;

	i = 0;
	tmp = ft_calloc(argc, sizeof(int));
	if (!tmp)
		return (0);
	while (i < argc - 1)
	{
		tmp[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	stack_a = indexing(argc, tmp);
	free(tmp);
	if (!stack_a)
		return (0);
	return (stack_a);
}

int	*indexing(int argc, int *stack_a)
{
	t_min	min;

	min.stack = ft_calloc(argc, sizeof(int));
	if (!min.stack)
		return (0);
	min.laps = 1;
	min.save = find_min(stack_a, argc - 1) - 1;
	while (min.laps < argc)
	{
		min.i = 0;
		min.value = find_max(stack_a, argc - 1) + 1;
		while (min.i < argc - 1)
		{
			if (stack_a[min.i] < min.value && stack_a[min.i] > min.save)
			{
				min.value = stack_a[min.i];
				min.index = min.i;
			}
			min.i++;
		}
		min.stack[min.index] = min.laps;
		min.save = min.value;
		min.laps++;
	}
	return (min.stack);
}

int	error_check(int argc, char **argv)
{
	if (argc == 1)
	{
		write(1, "Usage : ./push_swap [int list]\n", 31);
		return (1);
	}
	if (!is_integer(argv) || is_duplicate(argv))
	{
		write(1, "Error\n", 6);
		return (1);
	}
	if (argc == 2)
		return (1);
	return (0);
}

void	free_stack(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
	stack_a = NULL;
	stack_b = NULL;
}
