/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:37:00 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/11 05:33:05 by vimercie         ###   ########lyon.fr   */
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

void	main_tester(int *stack, char what_stack);
int		is_sorted(int *stack);
int		is_integer(char **argv);
int		is_duplicate(int *stack_a);
int		error_check(int size, char **argv);
void	free_stack(int *stack_a, int *stack_b);
int		find_square(int size);
void	push_front(int *stack_to, int *stack_from, char push_to, int size);
void	push_back(int *stack_to, int *stack_from, char push_to, int size);
void	sort_in_b(int *stack_a, int *stack_b, int stack_size);
void	sort_merge(int *stack_a, int *stack_b, char stack_to, int stack_size);
void	tim_sort(int *stack_a, int *stack_b, int size);
void	insertion_sort(int *stack, char what_stack);
void	merge(int *stack_to, int *stack_from, char what_stack, int stack_size);
void	swap(int *stack, char what_stack);
void	ss(int *stack_a, int *stack_b);
void	push(int *stack_from, int *stack_to, char push_to);
void	rotate(int *stack, char what_stack);
void	rr(int *stack_a, int *stack_b);
void	r_rotate(int *stack, char what_stack);
void	rrr(int *stack_a, int *stack_b);

#endif