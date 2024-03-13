/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_clear.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:41:21 by johii             #+#    #+#             */
/*   Updated: 2024/03/13 15:14:52 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link_list.h"

/*
	Function: void lst_clear(t_list **head)
	-----------------------------------------
	Clears the entire linked list and sets the head pointer to NULL.

	Parameters:
		- t_list **head: A pointer to the head pointer of the linked list.
*/
void	lst_clear(t_list **head)
{
	t_list	*node;

	if (!head)
		return ;
	while (*head)
	{
		node = (*head)->next;
		del_one(*head);
		*head = node;
	}
	*head = NULL;
}

// Check if the head pointer is valid
// Iterate through the linked list and delete each node
// Save the next node in a temporary variable
/*
	(*head): dereferences the head pointer, obtaining the
	actual node to which the head is pointing.
*/
// Delete the current node
// Move the head pointer to the next node
// Set the head pointer to NULL after clearing the list