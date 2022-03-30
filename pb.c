/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:57:35 by vimercie          #+#    #+#             */
/*   Updated: 2022/03/30 18:43:35 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	pb(int **stack_a, int **stack_b)
{
	int len;

	if (*stack_a[0] == '\0')
		return ;
	len = 0;
	while (*stack_b[len])
		len++;
	while (len >= 0)
	{
		*stack_b[len + 1] == *stack_b[len];
		len--;
	}
	*stack_b[0] = *stack_a[0];
	len = 0;
	while (*stack_a[len])
	{
		*stack_a[len] = *stack_a[len];
		len++;
	}
	*stack_a[len] = '\0';
	write(1, "pb\n", 3);
}
