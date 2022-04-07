/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:02:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/07 01:59:30 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// int	find_median(int	*stack)
// {
// 	int	n;

// 	n = 0;
// 	while (stack[n] != '\0')
// 		n++;
// 	return ((n / 2) + 1);
// }

void	insertion_sort(int	*stack_a)
{
	int	size;
	int	sorted;

	size = 0;
	sorted = 1;
	while (stack_a[size])
		size++;
	while (sorted < size)
	{
		if (stack_a[0] > stack_a[1])
		{
			swap(stack_a, 'a');
			sorted++;
			if (sorted < size)
				rotate(stack_a, 'a');
		}
		else if (stack_a[0] < stack_a[1])
		{
			r_rotate(stack_a, 'a');
			sorted = 1;
		}
		// main_tester(stack_a);
	}
}
