/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:38 by vimercie          #+#    #+#             */
/*   Updated: 2022/03/30 18:43:40 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	pa(int **stack_a, int **stack_b)
{
	int len;

	if (*stack_b[0] == '\0')
		return ;
	len = 0;
	while (*stack_a[len])
		len++;
	while (len >= 0)
	{
		*stack_a[len + 1] == *stack_a[len];
		len--;
	}
	*stack_a[0] = *stack_b[0];
	len = 0;
	while (*stack_b[len])
	{
		*stack_b[len] = *stack_b[len];
		len++;
	}
	*stack_b[len] = '\0';
	write(1, "pa\n", 3);
}
