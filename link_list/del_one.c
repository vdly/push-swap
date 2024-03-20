/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_one.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:09:03 by johii             #+#    #+#             */
/*   Updated: 2024/03/15 13:22:55 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "link_list.h"

/*
	srcstion: void del_one(t_list *lst)
	--------------------------------------
	Deletes a single node in the linked list, 
		setting its number to 0 and //freeing the memory.

	Parameters:
		- t_list *lst: A pointer to the node to be deleted.
*/
void	del_one(t_list *lst)
{
	if (!lst)
		return ;
	lst->number = 0;
}

// Check if the node is valid
// Set the number of the node to 0
// //free the memory occupied by the node