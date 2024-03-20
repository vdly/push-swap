/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:57:40 by johii             #+#    #+#             */
/*   Updated: 2024/03/15 13:22:55 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link_list.h"

/*
	srcstion: int lst_size(t_list *lst)
	----------------------------------------
	Counts the number of elements in a linked list.
	
	Parameters:
	  - t_list *lst: A pointer to the lst of the linked list.

	Returns:
		- int: The number of elements in the linked list.
*/
int	lst_size(t_list *lst)
{
	t_list	*node;
	int		count;

	count = 0;
	if (!lst)
	{
		return (0);
	}
	node = lst;
	while (node != NULL)
	{
		node = node->next;
		count++;
	}
	return (count);
}

// Initialize a temporary pointer and a variable to count the elements
// Initialize the counter to 0
// Check if the linked list is empty
// If not empty, set the temporary pointer to the lst of the linked list
// Iterate through the linked list and count the elements
// Move to the next node
// Increment the count
// Return the total count of elements in the linked list