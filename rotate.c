/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:49 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/01 04:20:19 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(int **stack, char what_stack)
{
	int	i;
	int	tmp;
	
	i = 0;
	if (*stack[1] == '\0')
		return ;
	tmp = *stack[0];
	while (*stack[i])
	{
		*stack[i] = *stack[i + 1];
		i++;
	}
	*stack[i] = tmp;
	if (what_stack == 'a')
		write(1, "ra\n", 3);
	if (what_stack == 'b')
		write(1, "rb\n", 3);
	if (what_stack == 's')
		write(1, "rr\n", 3);
}
