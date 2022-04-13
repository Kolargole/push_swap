/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:37:00 by vimercie          #+#    #+#             */
/*   Updated: 2022/04/14 00:18:26 by vimercie         ###   ########lyon.fr   */
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
int		error_check(int size, char **argv);
int		is_sorted(int *stack);
int		is_integer(char **argv);
int		is_duplicate(int *stack_a);
void	free_stack(int *stack_a, int *stack_b);
void	custom_sort(int *stack_a, int *stack_b, int size);
void	ssa_bward(int *stack_a, int *stack_b, int *smaller_a, int *smaller_b);
void	ssa_fward(int *stack_a, int *stack_b, int *smaller_a, int *smaller_b);
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