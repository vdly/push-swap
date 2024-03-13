/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:38:48 by johii             #+#    #+#             */
/*   Updated: 2024/03/13 15:14:17 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link_list.h"

/*
	Function: void add_back(t_list **head, t_list *new_node)
	-----------------------------------------------------------
	Adds a new node to the end of a linked list.

	Parameters:
		- t_list **head: A pointer to the head pointer of the linked list.
		- t_list *new_node: A pointer to the new node to be added.
*/
void	add_last(t_list **head, t_list *new_node)
{
	t_list	*last_node;

	if (!new_node)
		return ;
	if (!*head)
	{
		*head = new_node;
		return ;
	}
	last_node = lst_last(*head);
	new_node->prev = last_node;
	last_node->next = new_node;
	new_node->next = NULL;
}

// Check if the new node is valid
// Check if the linked list is empty
// If empty, set the new node as the head
// Find the last node in the linked list
// Make the last element the prev in new node
// And make the next from last node point to the 
//	address of new node
// Making the last elemnt point to new_node and the 
//	prev from new node pointer point to the last element