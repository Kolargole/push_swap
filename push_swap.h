/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vimercie <vimercie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:37:00 by vimercie          #+#    #+#             */
/*   Updated: 2022/03/31 02:45:58 by vimercie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		error_check(int n, char **list);
void	swap(int **stack, char what_stack);
void	ss(int **stack_a, int **stack_b);
void	pa(int **stack_a, int **stack_b);
void	pb(int **stack_a, int **stack_b);
void	rotate(int **stack, char what_stack);
void	rr(int **stack_a, int **stack_b);
void	r_rotate(int **stack, char what_stack);
void	rrr(int **stack_a, int **stack_b);

#endif