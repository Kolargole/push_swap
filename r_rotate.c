/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_rotate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:11:03 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/01 03:57:52 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_rotate(int **stack, char what_stack)
{
	int	i;
	int	tmp;

	i = 0;
	if (*stack[1] == '\0')
		return ;
	while (*stack[i])
		i++;
	tmp = *stack[i];
	while (i > 0)
	{
		*stack[i] = *stack[i - 1];
		i--;
	}
	*stack[0] = tmp;
	if (what_stack == 'a')
		write(1, "rra\n", 4);
	if (what_stack == 'b')
		write(1, "rrb\n", 4);
	if (what_stack == 's')
		write(1, "rrr\n", 4);
}
