/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:11 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/20 16:39:33 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	rrr(int *stack_a, int *stack_b)
{
	r_rotate(stack_a, ' ');
	r_rotate(stack_b, 's');
	return ;
}
