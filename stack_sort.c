/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 20:02:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/06 22:59:57 by vimercie         ###   ########lyon.fr   */
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

void	stack_sort(int	*stack_a, int *stack_b)
{
	// int	i;
	int	size;
	// int	pivot;

	// i = 0;
	size = 0;
	// pivot = find_median(stack_a);
	while (stack_a[size])
		size++;
	while (size > 0)
	{
		
		size--;
		main_tester(stack_a, stack_b);
	}
}
