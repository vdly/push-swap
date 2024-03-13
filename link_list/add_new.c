/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_new.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:02:29 by johii             #+#    #+#             */
/*   Updated: 2024/02/18 17:46:26 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link_list.h"

/*
	Function: t_list *new_node(int number)
	-----------------------------------------
	Creates a new node for a doubly linked list, initializes its fields, 
	and returns the new node.

	Parameters:
	 - int number: The value to be stored in the 'number' field of the new node.

	Returns:
		- t_list *: A pointer to the newly created node.
*/
t_list	*add_new(int number)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->number = number;
	new_node->index = -1;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

// Declare a pointer to a new node
// Allocate memory for the new node
// Check if memory allocation was successful
// Initialize the fields of the new node
// Return a pointer to the newly created node
/*
	the -1 value acts as an indicator that the node has not been 
	associated with a specific index, and it can be useful for
	checking whether an index has been set when working with the
	linked list later in the program\
*/