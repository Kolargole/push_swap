/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:46:19 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/14 01:42:48 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*smaller_data(int *stack, int sorted)
{
	int	i;
	int	value;
	int	index;
	int	size;
	int	*smaller;

	i = 0;
	size = 1;
	index = 0;
	value = stack[0];
	smaller = ft_calloc(4, sizeof(int));
	while (stack[size])
		size++;
	while (i < size - sorted)
	{
		if (stack[i] < value)
		{
			value = stack[i];
			index = i;
		}
		i++;
	}
	smaller[0] = value;
	smaller[1] = index;
	smaller[2] = size;
	smaller[3] = sorted;
	return (smaller);
}

void	find_smaller(int *stack_a, int *stack_b, int *smaller_a, int *smaller_b)
{
	while (stack_a[0] != smaller_a[0])
	{
		if (smaller_a[1] < (smaller_a[2] / 2))
		{
			if (smaller_b[1] < (smaller_b[2] / 2))
				rrr(stack_a, stack_b);
			else
				r_rotate(stack_a, 'a');
		}
		else if (smaller_a[1] >= (smaller_a[2] / 2))
		{
			if (smaller_b[1] >= (smaller_b[2] / 2))
				rr(stack_a, stack_b);
			else
				rotate(stack_a, 'a');
		}
	}
	smaller_b = smaller_data(stack_b, smaller_b[4]);
	while (stack_b[0] != smaller_b[0])
	{
		if (smaller_b[1] < (smaller_b[2] / 2))
			r_rotate(stack_b, 'b');
		else
			rotate(stack_b, 'b');
	}
}

void	set_smaller_a(int *stack_a, int *stack_b, int *smaller_a, int *smaller_b)
{
	if (smaller_a[1] < smaller_a[2] / 2)
		ssa_fward(stack_a, stack_b, smaller_a, smaller_b);
	else if (smaller_a[1] >= smaller_a[2] / 2)
		ssa_bward(stack_a, stack_b, smaller_a, smaller_b);
}

void	set_smaller_b(int *stack_b, int *smaller_b)
{
	int	i;

	i = 0;
	if (smaller_b[1] < smaller_b[2] / 2)
	{
		while (i < smaller_b[1] - 1)
		{
			swap(stack_b, 'b');
			r_rotate(stack_b, 'b');
			i++;
		}
	}
	else
	{
		while (i < smaller_b[2] - smaller_b[1])
		{
			rotate(stack_b, 'b');
			swap(stack_b, 'b');
			i++;
		}
	}
}

void	custom_sort(int *stack_a, int *stack_b, int size)
{
	int	i;
	int	sorted;
	int	*smaller_a;
	int	*smaller_b;
	int	*smaller_tmp;

	i = 0;
	sorted = 1;
	while (i < size / 2)
	{
		push(stack_a, stack_b, 'b');
		i++;
	}
	main_tester(stack_a, 'a');
	main_tester(stack_b, 'b');
	while (sorted < 3)
	{
		i = 1;
		smaller_a = smaller_data(stack_a, sorted);
		smaller_b = smaller_data(stack_b, sorted);
		smaller_tmp = smaller_data(stack_b, sorted);
		find_smaller(stack_a, stack_b, smaller_a, smaller_b);
		set_smaller_a(stack_a, stack_b, smaller_a, smaller_tmp);
		dprintf(1, "juste après set_smaller_a\n");
		main_tester(stack_a, 'a');
		main_tester(stack_b, 'b');
		set_smaller_b(stack_b, smaller_tmp);
		dprintf(1, "juste après set_smaller_b\n");
		sorted++;
		while (i < sorted)
		{
			rrr(stack_a, stack_b);
			i++;
		}
		main_tester(stack_a, 'a');
		main_tester(stack_b, 'b');
	}
	free_stack(smaller_a, smaller_b);
	free(smaller_tmp);
	
}
	