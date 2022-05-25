/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:30:22 by vimercie          #+#    #+#             */
/*   Updated: 2022/05/25 18:17:11 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	main_tester(int *stack, char what_stack)
{
	int	i;

	i = 0;
	dprintf(1, "\n");
	dprintf (1, "stack_%c =\n", what_stack);
	while (stack[i])
	{
		dprintf(1, "%d\n", stack[i]);
		i++;
	}
	dprintf(1, "\n");
}

int	main(int argc, char **argv)
{
	int	*stack_a;
	int	*stack_b;

	if (!error_check(argc, argv))
		return (0);
	stack_a = parser(argc, argv);
	if (is_duplicate(stack_a))
		return (0);
	stack_a = indexing(argc, stack_a);
	stack_b = ft_calloc(argc, sizeof(int));
	if (!stack_a || !stack_b)
		return (0);
	radix(stack_a, stack_b);
	free_stack(stack_a, stack_b);
	return (0);
}
