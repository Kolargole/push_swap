/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 03:01:41 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/07 04:00:55 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	merge(int *stack_a, int *stack_b)
{
	while (stack_b[0] != '\0')
	{
		if (stack_b[0] < stack_a[0])
			push(stack_b, stack_a, 'a');
		else if (stack_b[0] > stack_a[0])
			r_rotate(stack_a, 'a');
	}
	while (stack_a[0] < stack_a[1])
		r_rotate(stack_a, 'a');
	r_rotate(stack_a, 'a');
}
