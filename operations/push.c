/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:41:49 by johii             #+#    #+#             */
/*   Updated: 2024/03/15 13:22:55 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	srcstion: void a_or_b(t_list **src_stack, t_list **dst_stack)
	------------------------------------------------------------
	Moves the top element from 'src_stack' to the top of 'dst_stack'.
 *
	Parameters:
	  - t_list **src_stack: A pointer to a pointer to the head 
	  						of the source stack.
	  - t_list **dst_stack: A pointer to a pointer to the head
	  						of the destination stack.
 */
void	a_or_b(t_list **src_stack, t_list **dst_stack)
{
	t_list	*temp_src;

	if (!src_stack || !dst_stack)
		return ;
	temp_src = *src_stack;
	if (temp_src && temp_src->next)
	{
		temp_src->next->prev = NULL;
		*src_stack = temp_src->next;
		temp_src->next = NULL;
	}
	else
		*src_stack = NULL;
	add_first(dst_stack, temp_src);
}
// Check if the source stack and destination stack are valid
// Store the head of the source stack
// Detach the first node from the source stack if it has more than one element
// Add the detached node to the front of the destination stack

// type 1 = pa, 2 = pb
void	push(t_list **a, t_list **b, int type)
{
	if (type == 1)
	{
		a_or_b(a, b);
		ft_printf("pb\n");
	}
	if (type == 2)
	{
		a_or_b(b, a);
		ft_printf("pa\n");
	}
}
