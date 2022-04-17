/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:27:12 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/17 18:11:06 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_last_i(int *stack)
{
	int	i;

	i = 0;
	while (stack[i])
		i++;
	return (i - 1);
}

void	push_sort(int *stack_a, int *stack_b)
{
	int end_b;
	int	mid_b;

	end_b = get_last_i(stack_b);
	mid_b = end_b / 2;
	if (stack_a[0] < stack_b[0])
		push(stack_a, stack_b, 'b');
	else if (stack_a[0] > stack_b[end_b])
	{
		push(stack_a, stack_b, 'b');
		r_rotate(stack_b, 'b');
	}
	else if (stack_a[0] < stack_b[mid_b])
	{
		while (stack_a[0] > stack_b[0])
			r_rotate(stack_b, 'b');
		push(stack_a, stack_b, 'b');
		while (stack_b[0] > stack_b[end_b + 1])
			rotate(stack_b, 'b');
	}
	else if (stack_a[0] > stack_b[mid_b])
	{
		while (stack_a[0] < stack_b[end_b])
			rotate(stack_b, 'b');
		push(stack_a, stack_b, 'b');
		while (stack_b[0] > stack_b[end_b + 1])
			r_rotate(stack_b, 'b');
	}
}

void	sorting(int *stack_a, int *stack_b, int size)
{
	int	i;
	int	s_size;
	int	laps;

	s_size = 30;
	laps = 0;
	while ((laps + 1) * s_size < size)
	{
		i = 0;
		while (i < size - (laps * s_size))
		{
			if (stack_a[0] <= s_size * (laps + 1) && stack_a[0] > s_size * laps)
				push_sort(stack_a, stack_b);
			else
				r_rotate(stack_a, 'a');
			i++;
		}
		i = 0;
		while (i < laps * size)
		{
			r_rotate(stack_a, 'a');
			i++;
		}
		laps++;
		while (stack_b[0])
		{
			push(stack_b, stack_a, 'a');
			r_rotate(stack_a, 'a');
		}
	}
	while (stack_a[0] != 1)
		push_sort(stack_a, stack_b);
	while (stack_b[0])
	{
		push(stack_b, stack_a, 'a');
		r_rotate(stack_a, 'a');
	}
}