/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_first.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 20:40:08 by johii             #+#    #+#             */
/*   Updated: 2024/03/06 18:23:57 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link_list.h"

/*
	Function: void add_front(t_list **head, t_list *new_node)
	-------------------------------------------------------
	Adds a new_node node (`new_node`) to the front of a doubly linked 
	list (`*head`).

	Parameters:
		- t_list **head: A pointer to the head of the linked list.
		- t_list *new_node:  A pointer to the new_node node to be added.
 */
void	add_first(t_list **head, t_list *new_node)
{
	t_list	*first_node;

	if (!new_node)
		return ;
	new_node->prev = NULL;
	if (!head || !*head)
	{
		*head = new_node;
		return ;
	}
	new_node->next = *head;
	first_node = *head;
	first_node->prev = new_node;
	*head = new_node;
}

// Check if the new_node node is valid
// Initialize a temporary variable
// Set the prev pointer of the new_node node to NULL
// Check if the linked list or its head is empty
// If empty, set the new_node node as the head and return
// Set the next pointer of the new_node node to the current front node
// Update the prev pointer of the current front node
// Update the head of the linked list to the new_node node
