/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 21:27:33 by johii             #+#    #+#             */
/*   Updated: 2024/03/13 18:40:48 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	Function: void rev_rotate(t_list **a, t_list **b, int type)
	-------------------------------------------------------
	Reverse rotates the linked lists (stacks) 'a' and/or 'b' based on the 
	specified type. (make last node to the firs node and shift the rest down)
	If 'type' = 1, it rev rotates stack 'a'. If 'type' = 2, it rotates stack 'b'
	If 'type' is 3, it rev rotates both stacks 'a' and 'b'.

	Parameters:
	 - t_list **a: A pointer pointing to the head of (stack 'a').
	 - t_list **b: A pointer pointing to the head of (stack 'b').
	 - int type: 1 for 'a', 2 for 'b', 3 for both
*/
void	rev_rotate(t_list **a, t_list **b, int type)
{
	t_list		*temp_a;
	t_list		*temp_b;

	if (!a || !b)
		return ;
	if (type == 1 && lst_size(*a) <= 1)
		return ;
	if (type == 2 && lst_size(*b) <= 1)
		return ;
	if (type == 1 || (type == 3 && lst_size(*a) > 1))
	{
		temp_a = lst_last(*a);
		temp_a->prev->next = NULL;
		add_first(a, temp_a);
	}
	if (type == 2 || (type == 3 && lst_size(*b) > 1))
	{
		temp_b = lst_last(*b);
		temp_b->prev->next = NULL;
		add_first(b, temp_b);
	}
	if_type_rr(type);
}

void	if_type_rr(int type)
{
	if (type == 1)
		ft_printf("rra\n", type);
	if (type == 2)
		ft_printf("rrb\n", type);
	if (type == 3)
		ft_printf("rrr\n", type);
}

// Check if either list is NULL or has 1 or fewer elements
// Detach the last node from the rest of the list
// Add the detached node to the front of the first list (a), 
//	effectively reverse rotating the list
// Output a message based on the type of rotation