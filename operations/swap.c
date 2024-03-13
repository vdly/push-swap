/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:42:21 by johii             #+#    #+#             */
/*   Updated: 2024/03/13 18:46:48 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	Function: void swap(t_list **a, t_list **b, int type)
	-----------------------------------------------------
	Swaps the values of the top two elements in the linked lists 'a' and/or 'b' 
		based on the specified type.
	If 'type' is 1, it swaps the values in stack 'a'. If 'type' is 2, it swaps
		the values in stack 'b'.
	If 'type' is 3, it swaps the values in both stacks 'a' and 'b'.
 *
	Parameters:
	 - t_list **a: A pointer pointing to the head of (stack 'a').
	 - t_list **b: A pointer pointing to the head of (stack 'b').
	 - int type: 1 for 'a', 2 for 'b', 3 for both
 */
void	swap(t_list **a, t_list **b, int type)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (type == 2 && lst_size(*b) <= 1)
		return ;
	if (!a || !b || lst_size(*a) <= 1)
		return ;
	if (type == 1 || type == 3)
	{
		first = (*a);
		second = (*a)->next;
		third = second->next;
		swapping(a, first, second, third);
	}
	if (type == 2 || type == 3)
	{
		first = (*b);
		second = (*b)->next;
		third = second->next;
		swapping(b, first, second, third);
	}
	if_type_s(type);
}

void	swapping(t_list **stack, t_list *first, t_list *second, t_list *third)
{
	(*stack) = second;
	second->next = first;
	second->prev = NULL;
	first->next = third;
	first->prev = (*stack);
	third->prev = first;
}

void	if_type_s(int type)
{
	if (type == 1)
		ft_printf("sa\n", type);
	if (type == 2)
		ft_printf("sb\n", type);
	if (type == 3)
		ft_printf("ss\n", type);
}

// Check if either list is NULL or has 1 or fewer elements
// Store the value of the first node in a temporary variable
// Swap the values of the first and second nodes in the first list
// Output a message based on the type of swap