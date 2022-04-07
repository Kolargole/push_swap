/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 01:26:40 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/08 01:29:06 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(int *stack)
{
	int	i;

	i = 1;
	while (stack[i])
	{
		if (stack[i - 1] > stack[i])
			return (0);
		i++;
	}
	return (1);
}
