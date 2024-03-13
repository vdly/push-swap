/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:04:55 by johii             #+#    #+#             */
/*   Updated: 2024/03/13 19:16:15 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdint.h>
# include <stdlib.h>
# include "libft/ft_printf/ft_printf.h"
# include "link_list/link_list.h"
# include "libft/libft.h"

// operations
void	swap(t_list **a, t_list **b, int type);
void	swapping(t_list **stack, t_list *first, t_list *second, t_list *third);
void	if_type_s(int type);

void	push(t_list **a, t_list **b, int type);
void	a_or_b(t_list **src_stack, t_list **dst_stack);

void	rotate(t_list **a, t_list **b, int type);
void	if_type_r(int type);

void	rev_rotate(t_list **a, t_list **b, int type);
void	if_type_rr(int type);

// parsing
int		check_alpha(char *str);
int		duplicate(char **av, int i, int number);
int		parse_check(char **str);

// indexing
int		get_min(t_list *stack);
void	indexing(t_list *stack);

// radix sort
int		count_bits(int size);
void	radix_sort(t_list **stack_a, t_list **stack_b);

// simple sortings
int		sorted(t_list *stack);
void	sort_three(t_list **stack_a, t_list **stack_b);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	push_top(t_list **stack_a, t_list **stack_b, int size, int idx);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	simple_sorts(t_list **stack_a, t_list **stack_b, int ac);

/* operations for array

void		swap(t_stack *stack, int type);

static void	push(t_stack *stack, int type);
static void	a_or_b(t_stack *stack, int type);
static void	replace_num(t_stack *stack, int *temp, int type, int stack_size);

void		rotate(t_stack *stack, int type);
static void	shift_up(int *stack, int size);

void		rev_rotate(t_stack *stack, int type);
static void	shift_down(int *stack, int size);

*/

void	print_stack(t_list *temp);

#endif
