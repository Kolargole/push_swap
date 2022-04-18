/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:11:03 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/18 03:45:12 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate(int *stack, char what_stack)
{
	int	i;
	int	size;
	int	tmp;

	if (stack[1] == '\0')
		return ;
	i = 0;
	size = 0;
	while (stack[size])
		size++;
	tmp = stack[0];
	while (i < size - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = tmp;
	if (what_stack)
		return ;
	// if (what_stack == 'a')
	// 	write(1, "rra\n", 4);
	// if (what_stack == 'b')
	// 	write(1, "rrb\n", 4);
	// if (what_stack == 's')
	// 	write(1, "rrr\n", 4);
}
