/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:38 by vimercie          #+#    #+#             */
/*   Updated: 2022/06/14 15:42:51 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	shift_dest(int *stack_to)
{
	int	i;
	int	size;

	size = get_stack_size(stack_to);
	i = size;
	if (size > 0)
	{
		while (i >= 0)
		{
			stack_to[i + 1] = stack_to[i];
			i--;
		}
	}
}

void	push(int *stack_from, int *stack_to, char push_to)
{
	int	i;
	int	size;

	if (stack_from[0] == '\0')
		return ;
	shift_dest(stack_to);
	stack_to[0] = stack_from[0];
	i = 0;
	size = get_stack_size(stack_from);
	while (i < size)
	{
		stack_from[i] = stack_from[i + 1];
		i++;
	}
	stack_from[i] = '\0';
	if (push_to == 'a')
		write(1, "pa\n", 3);
	if (push_to == 'b')
		write(1, "pb\n", 3);
}
