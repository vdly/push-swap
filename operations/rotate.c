/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 23:35:03 by johii             #+#    #+#             */
/*   Updated: 2024/03/13 18:40:57 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	Function: void rotate(t_list **a, t_list **b, int type)
	-------------------------------------------------------
	Rotates the linked lists (stacks) 'a' and/or 'b' based on the 
	specified type. (make first node to the last node and shift the rest up)
	If 'type' is 1, it rotates stack 'a'. If 'type' is 2, it rotates stack 'b'.
	If 'type' is 3, it rotates both stacks 'a' and 'b'.

	Parameters:
	 - t_list **a: A pointer pointing to the head of (stack 'a').
	 - t_list **b: A pointer pointing to the head of (stack 'b').
	 - int type: 1 for 'a', 2 for 'b', 3 for both
*/
void	rotate(t_list **a, t_list **b, int type)
{
	t_list		*temp_a;
	t_list		*temp_b;

	if (type == 2 && lst_size(*b) <= 1)
		return ;
	if (!a || !b || lst_size(*a) <= 1)
		return ;
	if (type == 1 || type == 3)
	{
		temp_a = *a;
		temp_a->next->prev = NULL;
		*a = temp_a->next;
		add_last(a, temp_a);
	}
	if (type == 2 || type == 3)
	{
		temp_b = *b;
		temp_b->next->prev = NULL;
		*b = temp_b->next;
		add_last(b, temp_b);
	}
	if_type_r(type);
}

void	if_type_r(int type)
{
	if (type == 1)
		ft_printf("ra\n", type);
	if (type == 2)
		ft_printf("rb\n", type);
	if (type == 3)
		ft_printf("rr\n", type);
}

// Check if either list is NULL or has 1 or fewer elements
// Detach the second node (if it exists) from the rest of the list
// Move the head of the first list to the next node, effectively 
//	rotating the list
// Add the detached node to the back of the first list
// Output a message based on the type of rotation