/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:37:00 by vimercie          #+#    #+#             */
/*   Updated: 2022/03/30 18:46:20 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		error_check(int n, char **list);
void	swap(int **stack, char c);
void	ss(int **stack_a, int **stack_b);
void	pa(int **stack_a, int **stack_b);
void	pb(int **stack_a, int **stack_b);
void	rotate(int **first_stack, int **second_stack, char c);
void	rb(int **stack_a, int **stack_b);
void	rr(int **stack_a, int **stack_b);
void	rra(int **stack_a, int **stack_b);
void	rrb(int **stack_a, int **stack_b);
void	rrr(int **stack_a, int **stack_b);

#endif