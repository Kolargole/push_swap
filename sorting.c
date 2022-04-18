/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:27:12 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/18 03:58:01 by vimercie         ###   ########lyon.fr   */
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

void	push_sort(int *stack_a, int *stack_b, int b_size)
{
	if (stack_a[0] < stack_b[0])
		push(stack_a, stack_b, 'b');
	else if (stack_a[0] > stack_b[b_size - 1])
	{
		push(stack_a, stack_b, 'b');
		r_rotate(stack_b, 'b');
	}
	else if (stack_a[0] < stack_b[(b_size - 1) / 2])
	{
		while (stack_a[0] > stack_b[0])
			r_rotate(stack_b, 'b');
		push(stack_a, stack_b, 'b');
		while (stack_b[0] > stack_b[b_size])
			rotate(stack_b, 'b');
	}
	else if (stack_a[0] > stack_b[(b_size - 1) / 2])
	{
		while (stack_a[0] < stack_b[b_size - 1])
			rotate(stack_b, 'b');
		push(stack_a, stack_b, 'b');
		while (stack_b[0] > stack_b[b_size])
			r_rotate(stack_b, 'b');
	}
}

void	sorting(int *stack_a, int *stack_b, int size)
{
	int	i;
	int	b_size;
	int	s_size;
	int	laps;

	b_size = 0;
	s_size = 30;
	laps = 0;
	while ((laps + 1) * s_size < size)
	{
		i = 0;
		while (i < size - (laps * s_size))
		{
			if (stack_a[0] <= s_size * (laps + 1) && stack_a[0] > s_size * laps)
			{
				push_sort(stack_a, stack_b, b_size);
				b_size++;
			}
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
			b_size--;
			r_rotate(stack_a, 'a');
		}
	}
	while (stack_a[0] != 1)
	{
		push_sort(stack_a, stack_b, b_size);
		b_size++;
	}
	while (stack_b[0])
	{
		push(stack_b, stack_a, 'a');
		r_rotate(stack_a, 'a');
	}
}
