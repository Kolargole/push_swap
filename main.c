/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:30:22 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/01 19:27:57 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	main_tester(int **stack_a, int **stack_b)
{
	int	i;

	i = 0;
	while (*stack_a[i])
	{
		dprintf(1, "%d\n", *stack_a[i]);
		i++;
	}
	i = 0;
	while (*stack_b[i])
	{
		dprintf(1, "%d\n", *stack_b[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;
	int	size;

	size = 0;
	// if (argc <= 1)
	// 	return (0);
	// else
	// 	return (error_check(argc, argv));
	stack_a = ft_calloc(argc, sizeof(int));
	stack_b = ft_calloc(argc, sizeof(int));
	dprintf(1, "hola1\n");
	while (size < (argc - 1))
	{
		stack_a[size] = ft_atoi(argv[size + 1]);
		dprintf(1, "%d\n", stack_a[size]);
		size++;
	}
	dprintf(1, "hola2\n");
	quick_sort(&stack_a, &stack_b, 0, size - 1);
	main_tester(&stack_a, &stack_b);
}
