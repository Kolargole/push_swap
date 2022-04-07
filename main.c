/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:30:22 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/07 04:01:53 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	main_tester(int *stack, char what_stack)
{
	int	i;

	i = 0;
	dprintf(1,"\n");
	dprintf (1, "stack_%c =\n", what_stack);
	while (stack[i])
	{
		dprintf(1, "%d\n", stack[i]);
		i++;
	}
	dprintf(1,"\n");
}

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;
	int	size;
	int	i;

	// if (argc <= 1)
	// 	return (0);
	// else
	// 	return (error_check(argc, argv));
	size = 0;
	i = 0;
	stack_a = ft_calloc(argc, sizeof(int));
	stack_b = ft_calloc(argc, sizeof(int));
	while (size < (argc - 1))
	{
		stack_a[size] = ft_atoi(argv[size + 1]);
		size++;
	}
	while (i < (size / 2))
	{
		push(stack_a, stack_b, 'b');
		i++;
	}
	insertion_sort(stack_a, 'a');
	insertion_sort(stack_b, 'b');
	merge(stack_a, stack_b);
	main_tester(stack_a, 'a');
	free(stack_a);
	free(stack_b);
}
