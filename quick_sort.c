/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:02:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/05 19:05:53 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_median(int	*stack)
{
	int	n;

	n = 0;
	while (stack[n] != '\0')
		n++;
	return ((n / 2) + 1);
}

// int	partition(int **stack, int first_i, int last_i)
// {
	
// }

void	quick_sort(int	*stack_a, int *stack_b, int first_i, int last_i)
{
	int	i;
	int	size;
	int	pivot;

	i = 0;
	size = 0;
	pivot = find_median(stack_a);
	while (stack_a[size])
		size++;
	if (first_i < last_i)
	{
		while (size > 0)
		{
			if (stack_a[0] > pivot)
				push(stack_a, stack_b, 'b');
			else
				rotate(stack_a, 'a');
			size--;
		}
		// partition(stack_a)
	}
}
