/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:30:22 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/18 04:00:55 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	main_tester(stack_a, 'a');
	main_tester(stack_b, 'b');
	if (is_sorted(stack_a))
		dprintf(1, "Cette liste est triée.\n");
	else
		dprintf(1, "Cette liste n'est pas triée.\n");
	sorting(stack_a, stack_b, argc - 1);
	main_tester(stack_a, 'a');
	main_tester(stack_b, 'b');
	if (is_sorted(stack_a))
		dprintf(1, "Cette liste est triée.\n");
	else
		dprintf(1, "Cette liste n'est pas triée.\n");
	free_stack(stack_a, stack_b);
	return (0);
}
