/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:27:43 by vimercie          #+#    #+#             */
/*   Updated: 2022/05/25 18:09:33 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	radix(int *stack_a, int *stack_b)
{
	int	i;
	int j;
	int	n;
	int	size;

	i = 0;
	size = get_stack_size(stack_a);
	while (!is_sorted(stack_a))
	{
		j = 0;
		while (j < size)
		{
			n = stack_a[0];
			if ((n >> i) & 1)
				rotate(stack_a, 'a');
			else
				push(stack_a, stack_b, 'b');
			j++;
		}
		i++;
		while (stack_b[0])
			push(stack_b, stack_a, 'a');
	}
}
