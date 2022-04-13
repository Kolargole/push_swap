/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom_sort_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 00:00:32 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/14 01:47:56 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ssa_bward(int *stack_a, int *stack_b, int *smaller_a, int *smaller_b)
{
	int	i;

	i = 0;
	while (i < (smaller_a[2] - smaller_a[1]) - smaller_a[3])
	{
		if (smaller_b[1] < smaller_b[2] / 2)
		{
			ss(stack_a, stack_b);
			rrr(stack_a, stack_b);
		}
		else
		{
			swap(stack_a, 'a');
			r_rotate(stack_a, 'a');
		}
		i++;
	}
}

void	ssa_fward(int *stack_a, int *stack_b, int *smaller_a, int *smaller_b)
{
	int	i;

	i = 0;
	while (i < smaller_a[1] - smaller_a[3])
	{
		if (smaller_b[1] > smaller_b[2] / 2)
		{
			rr(stack_a, stack_b);
			ss(stack_a, stack_b);
		}
		else
		{
			rotate(stack_a, 'a');
			swap(stack_a, 'a');
		}
		i++;
	}
}
