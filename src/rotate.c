/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:11:03 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/20 16:49:32 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rotate(int *stack, char what_stack)
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
	if (what_stack == 'a')
		write(1, "ra\n", 3);
	if (what_stack == 'b')
		write(1, "rb\n", 3);
	if (what_stack == 's')
		write(1, "rr\n", 3);
}
