/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:38 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/11 05:43:35 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(int *stack_from, int *stack_to, char push_to)
{
	int	i;
	int	size;

	if (stack_from[0] == '\0')
		return ;
	size = 0;
	while (stack_to[size])
		size++;
	i = size;
	if (i > 0)
	{
		while (i >= 0)
		{
			stack_to[i + 1] = stack_to[i];
			i--;
		}
	}
	stack_to[0] = stack_from[0];
	while (stack_from[size])
		size++;
	i = 0;
	while (i < size)
	{
		stack_from[i] = stack_from[i + 1];
		i++;
	}
	stack_from[i] = '\0';
	if (push_to)
		return ;
	// if (push_to == 'a')
	// 	write(1, "pa\n", 3);
	// if (push_to == 'b')
	// 	write(1, "pb\n", 3);
}
