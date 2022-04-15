/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:30:22 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/15 18:19:13 by vimercie         ###   ########lyon.fr   */
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

int	*indexing(int argc, int *stack_a)
{
	int		i;
	int		*stack_i;
	t_min	min;

	stack_i = ft_calloc(argc, sizeof(int));
	min.laps = 1;
	min.save = find_min(stack_a) - 1;
	while (min.laps < argc)
	{
		i = 0;
		min.value = find_max(stack_a) + 1;
		while (i < argc - 1)
		{
			if (stack_a[i] < min.value && stack_a[i] > min.save)
			{
				min.value = stack_a[i];
				min.index = i;
			}
			i++;
		}
		stack_i[min.index] = min.laps;
		min.save = min.value;
		min.laps++;
	}
	return (stack_i);
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
	free_stack(stack_a, stack_b);
	return (0);
}
