/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/20 16:49:45 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	r_rotate(int *stack, char what_stack)
{
	int	i;
	int	tmp;

	if (stack[1] == '\0')
		return ;
	i = 0;
	while (stack[i + 1])
		i++;
	tmp = stack[i];
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = tmp;
	if (what_stack == 'a')
		write(1, "rra\n", 4);
	if (what_stack == 'b')
		write(1, "rrb\n", 4);
	if (what_stack == 's')
		write(1, "rrr\n", 4);
}
