/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:30:22 by vimercie          #+#    #+#             */
/*   Updated: 2022/06/14 15:41:55 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	main_tester(int *stack, char what_stack)
{
	int	i;

	i = 0;
	dprintf(2, "\n");
	dprintf (2, "stack_%c =\n", what_stack);
	while (stack[i])
	{
		dprintf(2, "%d\n", stack[i]);
		i++;
	}
	dprintf(2, "\n");
}

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;

	if (error_check(argc, argv))
		return (0);
	stack_a = parser(argc, argv);
	if (!stack_a)
		return (0);
	stack_b = ft_calloc(argc, sizeof(int));
	if (!stack_b)
	{
		free(stack_a);
		return (0);
	}
	if (is_sorted(stack_a))
	{
		free_stack(stack_a, stack_b);
		return (0);
	}
	if (argc <= 6)
		low_argc(argc, stack_a, stack_b);
	else
		radix(stack_a, stack_b);
	free_stack(stack_a, stack_b);
	return (0);
}
