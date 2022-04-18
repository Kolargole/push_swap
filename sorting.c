/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:27:12 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/19 01:32:44 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

t_loop	sort_stacks(int *stack_a, int *stack_b, int size, t_loop loop)
{
	int	i;
	int	start;
	int	end;

	loop.laps = 0;
	loop.b_size = 0;
	while ((loop.laps + 1) * loop.s_size < size)
	{
		i = 0;
		start = loop.s_size * loop.laps;
		end = loop.s_size * (loop.laps + 1);
		while (i < size - (loop.laps * loop.s_size))
		{
			if (is_in_range(stack_a[0], start, end))
			{
				push_sort(stack_a, stack_b, loop.b_size);
				loop.b_size++;
			}
			else
				r_rotate(stack_a, 'a');
			i++;
		}
		i = 0;
		while (i < loop.laps * size)
		{
			r_rotate(stack_a, 'a');
			i++;
		}
		loop.laps++;
		while (stack_b[0])
		{
			push(stack_b, stack_a, 'a');
			loop.b_size--;
			r_rotate(stack_a, 'a');
		}
	}
	return (loop);
}

void	sort_remainder(int *stack_a, int *stack_b, t_loop loop)
{
	while (stack_a[0] != 1)
	{
		push_sort(stack_a, stack_b, loop.b_size);
		loop.b_size++;
	}
	while (stack_b[0])
	{
		push(stack_b, stack_a, 'a');
		r_rotate(stack_a, 'a');
	}
}

void	sorting(int *stack_a, int *stack_b, int size)
{
	t_loop loop;

// choose stack_size here :
	loop.s_size = 30;
	loop = sort_stacks(stack_a, stack_b, size, loop);
	sort_remainder(stack_a, stack_b, loop);
}
