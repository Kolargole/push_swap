/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:50:02 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/20 12:06:34 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_min(int *stack_a, int size)
{
	int	i;
	int	min;

	i = 0;
	min = stack_a[0];
	while (i < size)
	{
		if (stack_a[i] < min)
			min = stack_a[i];
		i++;
	}
	return (min);
}

int	find_max(int *stack_a, int size)
{
	int	i;
	int	max;

	i = 0;
	max = stack_a[0];
	while (i < size)
	{
		if (stack_a[i] > max)
			max = stack_a[i];
		i++;
	}
	return (max);
}

int	max_laps(int size, int chunk_size)
{
	int	laps;

	laps = 0;
	while (laps * chunk_size < size)
		laps++;
	return (laps - 1);
}
