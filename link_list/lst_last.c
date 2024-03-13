/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:08:56 by johii             #+#    #+#             */
/*   Updated: 2024/02/01 19:10:18 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link_list.h"

/*
	Function: t_list *lst_last(t_list *lst)
	-------------------------------------------
	Finds the last node in a linked list.

	Parameters:
		- t_list *lst: A pointer to the head of the linked list.

	Returns:
		- t_list *: A pointer to the last node in the linked list.
					Returns NULL if the list is empty.
*/
t_list	*lst_last(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// Check if the linked list is empty
// Iterate through the linked list until the last node is reached
// Return a pointer to the last node in the linked list