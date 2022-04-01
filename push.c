/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:38 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/01 04:19:56 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(int **stack_from, int **stack_to, char push_to)
{
	int len;

	if (*stack_from[0] == '\0')
		return ;
	len = 0;
	while (*stack_to[len])
		len++;
	while (len >= 0)
	{
		*stack_to[len + 1] = *stack_to[len];
		len--;
	}
	*stack_to[0] = *stack_from[0];
	len = 0;
	while (*stack_from[len])
	{
		*stack_from[len] = *stack_from[len];
		len++;
	}
	*stack_from[len] = '\0';
	if (push_to == 'a')
		write(1, "pa\n", 3);
	if (push_to == 'b')
		write(1, "pb\n", 3);
}
