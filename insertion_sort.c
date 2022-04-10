/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:02:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/11 01:02:20 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insertion_sort(int	*stack, char what_stack)
{
	int	size;
	int	sorted;

	size = 0;
	sorted = 0;
	while (stack[size])
		size++;
	while (!is_sorted(stack))
	{
		if (stack[0] < stack[1])
		{
			sorted = 1;
			r_rotate(stack, what_stack);
		}
		else if (stack[0] > stack[1])
		{
			swap(stack, what_stack);
			sorted++;
			if (sorted < size)
				rotate(stack, what_stack);
		}
	}
}
