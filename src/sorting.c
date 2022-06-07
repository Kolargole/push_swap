/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:27:12 by vimercie          #+#    #+#             */
/*   Updated: 2022/06/05 17:19:03 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

// t_loop	push_sort(int *stack_a, int *stack_b, t_loop loop)
// {
// 	if (stack_a[0] > stack_b[0])
// 		push(stack_a, stack_b, 'b');
// 	else if (stack_a[0] < stack_b[loop.b_size - 1])
// 	{
// 		push(stack_a, stack_b, 'b');
// 		loop = is_rr(stack_a, stack_b, loop);
// 	}
// 	else if (stack_a[0] > stack_b[(loop.b_size - 1) / 2])
// 	{
// 		while (stack_a[0] < stack_b[0])
// 			loop = is_rr(stack_a, stack_b, loop);
// 		push(stack_a, stack_b, 'b');
// 		while (stack_b[0] < stack_b[loop.b_size])
// 			r_rotate(stack_b, 'b');
// 	}
// 	else if (stack_a[0] < stack_b[(loop.b_size - 1) / 2])
// 	{
// 		while (stack_a[0] > stack_b[loop.b_size - 1])
// 			r_rotate(stack_b, 'b');
// 		push(stack_a, stack_b, 'b');
// 		while (stack_b[0] < stack_b[loop.b_size])
// 			rotate(stack_b, 'b');
// 	}
// 	return (loop);
// }

// t_loop	push_in_range(int *stack_a, int *stack_b, int size, t_loop loop)
// {
// 	int	start;
// 	int	end;

// 	loop.i = 0;
// 	start = loop.chunk_size * loop.laps;
// 	end = loop.chunk_size * (loop.laps + 1);
// 	while (loop.i < size)
// 	{
// 		if (is_in_range(stack_a[0], start, end))
// 		{
// 			loop = push_sort(stack_a, stack_b, loop);
// 			loop.b_size++;
// 		}
// 		else
// 			rotate(stack_a, 'a');
// 		loop.i++;
// 	}
// 	return (loop);
// }

// t_loop	sort_stacks(int *stack_a, int *stack_b, int size, t_loop loop)
// {
// 	loop.laps = max_laps(size, loop.chunk_size) - 1;
// 	loop.b_size = 0;
// 	while (loop.laps >= 0)
// 	{
// 		loop = push_in_range(stack_a, stack_b, size, loop);
// 		loop.laps--;
// 		while (stack_b[0])
// 		{
// 			push(stack_b, stack_a, 'a');
// 			loop.b_size--;
// 		}
// 	}
// 	return (loop);
// }

// void	sort_remainder(int *stack_a, int *stack_b, int size, t_loop loop)
// {
// 	loop.i = 0;
// 	loop.laps = max_laps(size, loop.chunk_size);
// 	while (loop.i < size - (loop.chunk_size * loop.laps))
// 	{
// 		r_rotate(stack_a, 'a');
// 		loop.i++;
// 	}
// 	while (stack_a[0] != 1)
// 	{
// 		push_sort(stack_a, stack_b, loop);
// 		loop.b_size++;
// 	}
// 	while (stack_b[0])
// 		push(stack_b, stack_a, 'a');
// 	while (stack_a[0] != 1)
// 		rotate(stack_a, 'a');
// }

// void	sorting(int *stack_a, int *stack_b, int size)
// {
// 	t_loop	loop;

// 	loop.chunk_size = 30;
// 	loop = sort_stacks(stack_a, stack_b, size, loop);
// 	sort_remainder(stack_a, stack_b, size, loop);
// }
