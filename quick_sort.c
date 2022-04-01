/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:02:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/01 19:31:32 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_median(int	*stack)
{
	int	n;

	n = 0;
	while (stack[n] != '\0')
	{
		dprintf(1, "%d\n", stack[n]);
		n++;
	}
	return (n / 2);
}

// int	partition(int **stack, int first_i, int last_i)
// {
	
// }

void	quick_sort(int	**stack_a, int **stack_b, int first_i, int last_i)
{
	int	i;
	int	size;
	int	pivot;

	i = 0;
	size = 0;
	dprintf(1, "hola3\n");
	pivot = find_median(*stack_a);
	dprintf(1, "hola4\n");
	while (*stack_a[size] != '\0')
		size++;
	dprintf(1, "hola5\n");
	if (first_i < last_i)
	{
		while (i < size)
		{
			if (*stack_a[i] > pivot)
				push(stack_a, stack_b, 'b');
			else
				rotate(stack_a, 'a');
			i++;
		}
		// partition(stack_a)
	}
}
