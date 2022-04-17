/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:50:02 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/17 16:24:43 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(int *stack_a)
{
	int	i;
	int	min;

	i = 0;
	min = stack_a[0];
	while (stack_a[i])
	{
		if (stack_a[i] < min)
			min = stack_a[i];
		i++;
	}
	return (min);
}

int	find_max(int *stack_a)
{
	int	i;
	int	max;

	i = 0;
	max = stack_a[0];
	while (stack_a[i])
	{
		if (stack_a[i] > max)
			max = stack_a[i];
		i++;
	}
	return (max);
}

int	*indexing(int argc, int *stack_a)
{
	int		i;
	int		*stack_i;
	t_min	min;

	stack_i = ft_calloc(argc, sizeof(int));
	min.laps = 1;
	min.save = find_min(stack_a) - 1;
	while (min.laps < argc)
	{
		i = 0;
		min.value = find_max(stack_a) + 1;
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
