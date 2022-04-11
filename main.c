/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:30:22 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/11 06:19:52 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(int *stack_a, int *stack_b)
{
	free(stack_a);
	free(stack_b);
}

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

	if (!error_check(argc, argv))
		return (0);
	size = 0;
	stack_a = ft_calloc(argc, sizeof(int));
	stack_b = ft_calloc(argc, sizeof(int));
	while (size < (argc - 1))
	{
		stack_a[size] = ft_atoi(argv[size + 1]);
		size++;
	}
	if (is_duplicate(stack_a))
	{
		free_stack(stack_a, stack_b);
		return (0);
	}
	tim_sort(stack_a, stack_b, size);
	// main_tester(stack_a, 'a');
	free_stack(stack_a, stack_b);
	return (0);
}
