/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:37:00 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/19 19:38:12 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

// enlever <stdio.h> avant de rendre le projet
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "Libft/libft.h"

typedef struct s_min
{
	int	laps;
	int	value;
	int	index;
	int	save;
}				t_min;

typedef struct s_loop
{
	int	laps;
	int	chunk_size;
	int	b_size;
}				t_loop;

void	main_tester(int *stack, char what_stack);

// sorting algorithm :
void	sorting(int *stack_a, int *stack_b, int size);
void	push_sort(int *stack_a, int *stack_b, int b_size);
t_loop	push_in_range(int *stack_a, int *stack_b, int size, t_loop loop);
t_loop	sort_stacks(int *stack_a, int *stack_b, int size, t_loop loop);
void	sort_remainder(int *stack_a, int *stack_b, int size, t_loop loop);

// parsing :
int		*parser(int argc, char **argv);
int		error_check(int size, char **argv);
int		*indexing(int argc, int *stack_a);
void	free_stack(int *stack_a, int *stack_b);

// utils :
int		find_min(int *stack_a, int size);
int		find_max(int *stack_a, int size);
int		max_laps(int size, int chunk_size);

// checking :
int		is_sorted(int *stack);
int		is_integer(char **argv);
int		is_duplicate(int *stack_a);
int		is_in_range(int n, int start, int end);

// instructions :
void	swap(int *stack, char what_stack);
void	ss(int *stack_a, int *stack_b);
void	push(int *stack_from, int *stack_to, char push_to);
void	rotate(int *stack, char what_stack);
void	rr(int *stack_a, int *stack_b);
void	r_rotate(int *stack, char what_stack);
void	rrr(int *stack_a, int *stack_b);

#endif