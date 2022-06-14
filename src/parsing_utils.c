/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:50:02 by vimercie          #+#    #+#             */
/*   Updated: 2022/06/14 14:45:40 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

char	*remove_zeros(char *n)
{
	int	i;
	int	negative;

	i = 0;
	negative = 0;
	if (n[i] == '-')
	{
		i++;
		negative++;
	}
	if (n[i] == '0')
	{
		while (n[i] && n[i] == '0')
			i++;
		n += i - negative;
		if (negative)
			n[0] = '-';
	}
	return (n);
}

int	get_stack_size(int *stack)
{
	int	i;

	i = 0;
	while (stack[i])
		i++;
	return (i);
}

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
