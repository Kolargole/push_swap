/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:10:11 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/01 04:19:26 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    rrr(int **stack_a, int **stack_b)
{
	r_rotate(stack_a, 't');
	r_rotate(stack_b, 's');
	return ;
}
