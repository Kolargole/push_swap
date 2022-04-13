/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 03:01:41 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/14 00:09:56 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	merge(int *stack_to, int *stack_from, char what_stack, int stack_size)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while (i < stack_size)
	{
		if (stack_from[0] < stack_to[0] || (j >= stack_size && i < stack_size))
		{
			push(stack_from, stack_to, what_stack);
			r_rotate(stack_to, what_stack);
			i++;
		}
		else if (stack_from[0] > stack_to[0])
		{
			r_rotate(stack_to, what_stack);
			j++;
		}
		if (i == stack_size)
		{
			while (stack_to[0] < stack_to[1])
				rotate(stack_to, what_stack);
			rotate(stack_to, what_stack);
		}
	}
}
