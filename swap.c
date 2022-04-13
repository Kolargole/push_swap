/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:11:15 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/14 00:35:47 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    swap(int *stack, char what_stack)
{
    int tmp;
    
    if (!(stack[1]))
        return ;
    tmp = stack[0];
    stack[0] = stack[1];
    stack[1] = tmp;
	if (what_stack)
		return ;
    // if (what_stack == 'a')
    //     write(1, "sa\n", 3);
    // if (what_stack == 'b')
    //     write(1, "sb\n", 3);
    // if (what_stack == 's')
    //     write(1, "ss\n", 3);
}
