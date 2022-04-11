/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tim_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 02:13:10 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/11 17:47:36 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_square(int size)
{
	int	i;

	i = 2;
	while (i <= size)
		i *= 2;
	return (i / 2);
}

void	push_front(int *stack_to, int *stack_from, char push_to, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		// rotate(stack_from, what_stack);
		push(stack_from, stack_to, push_to);
		i++;
	}
}

void	push_back(int *stack_to, int *stack_from, char push_to, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		push(stack_from, stack_to, push_to);
		r_rotate(stack_to, push_to);
		i++;
	}
}

void	sort_in_b(int *stack_a, int *stack_b, int stack_size)
{
	push_front(stack_b, stack_a, 'b', stack_size);
	insertion_sort(stack_b, 'b');
}

void	tim_sort(int *stack_a, int *stack_b, int size)
{
	int	i;
	int	stack_size;
	int	max_square;

	i = 0;
	max_square = find_square(size);
	stack_size = max_square / 4;
	sort_in_b(stack_a, stack_b, stack_size);
	push_back(stack_a, stack_b, 'a', stack_size);
	sort_merge(stack_a, stack_b, 'b', stack_size);
	push_back(stack_a, stack_b, 'a', stack_size * 2);
	sort_in_b(stack_a, stack_b, stack_size);
	push_back(stack_a, stack_b, 'a', stack_size);
	sort_merge(stack_a, stack_b, 'b', stack_size);
	merge(stack_a, stack_b, 'a', stack_size * 2);
	dprintf(1, "size = %d\n", size);
	dprintf(1, "max_square = %d\n", max_square);
	if (max_square == size)
		return ;
	i = 0;
	while (i + max_square < size)
		i++;
	// push_front(stack_b, stack_a, 'b', i);
	// insertion_sort(stack_b, 'b');
	// merge(stack_a, stack_b, 'a', size);
}
