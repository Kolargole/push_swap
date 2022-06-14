/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_argc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 17:30:44 by vimercie          #+#    #+#             */
/*   Updated: 2022/06/14 13:55:56 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	list_of_three(int *stack, char what_stack)
{
	if (stack[0] == 1 && stack[1] == 3)
	{
		swap(stack, what_stack);
		rotate(stack, what_stack);
	}
	else if (stack[0] == 2 && stack[1] == 1)
		swap(stack, what_stack);
	else if (stack[0] == 2 && stack[1] == 3)
		r_rotate(stack, what_stack);
	else if (stack[0] == 3 && stack[1] == 1)
		rotate(stack, what_stack);
	else if (stack[0] == 3 && stack[1] == 2)
	{
		swap(stack, what_stack);
		r_rotate(stack, what_stack);
	}
	return ;
}

void	list_of_four(int *stack_a, int *stack_b)
{
	push(stack_a, stack_b, 'b');
	if (stack_b[0] > 2)
	{
		while (stack_a[0] <= 2)
			rotate(stack_a, 'a');
	}
	else
	{
		while (stack_a[0] > 2)
			rotate(stack_a, 'a');
	}
	push(stack_a, stack_b, 'b');
	if (stack_a[0] > stack_a[1])
		rotate(stack_a, 'a');
	if (stack_b[0] < stack_b[1])
		rotate(stack_b, 'b');
	push(stack_b, stack_a, 'a');
	push(stack_b, stack_a, 'a');
	if (stack_a[0] > stack_a[2])
	{
		rotate(stack_a, 'a');
		rotate(stack_a, 'a');
	}
}

void	list_of_five(int *stack_a, int *stack_b)
{
	while (!stack_b[1])
	{
		if (stack_a[0] >= 4)
			push(stack_a, stack_b, 'b');
		else
			rotate(stack_a, 'a');
	}
	list_of_three(stack_a, 'a');
	if (stack_b[0] < stack_b[1])
		swap(stack_b, 'b');
	push(stack_b, stack_a, 'a');
	push(stack_b, stack_a, 'a');
	rotate(stack_a, 'a');
	rotate(stack_a, 'a');
}

void	low_argc(int argc, int *stack_a, int *stack_b)
{
	int	i;

	i = 0;
	if (argc == 3 && stack_a[0] > stack_a[1])
		swap(stack_a, 'a');
	else if (argc == 4)
		list_of_three(stack_a, 'a');
	else if (argc == 5)
		list_of_four(stack_a, stack_b);
	else if (argc == 6)
		list_of_five(stack_a, stack_b);
	return ;
}
