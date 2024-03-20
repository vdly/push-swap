/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 20:35:00 by johii             #+#    #+#             */
/*   Updated: 2024/03/15 19:43:09 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	int get_min(t_list *stack)
	-------------------------------------
	Finds the minimum value in the linked list.

	Parameters:
	  - t_list *stack: A pointer to the head of the linked list.

	Returns:
	  - int: The minimum value found in the linked list.
 */
int	get_min(t_list *stack)
{
	int	min_value;

	min_value = stack->number;
	while (stack)
	{
		if (stack->number < min_value)
			min_value = stack->number;
		stack = stack->next;
	}
	return (min_value);
}
// set first value in stack to min
// iterate through stack and if found number smaller than min, set said 
// number to min

/*
	void indexing(t_list *stack)
	---------------------------------------
	Assigns an index to each element in the linked list based on their values.

	Parameters:
	 - t_list *stack: A pointer to the head of the linked list.
*/
void	indexing(t_list *stack)
{
	int		min;
	int		index;
	int		value;
	t_list	*temp;

	index = lst_size(stack);
	value = INT_MAX;
	while (index)
	{
		temp = stack;
		min = get_min(stack);
		while (temp)
		{
			if (temp->number > min && temp->number < value)
				min = temp->number;
			temp = temp->next;
		}
		value = min;
		temp = stack;
		while (temp && temp->number != value)
			temp = temp->next;
		temp->index = index;
		index--;
	}
}
// find how many nodes are there in stack
// loop through temp and iterate through the whole stack to find the 
// largest num in stack
// set largest num to min
// set largest num to value
// make pointer point at first element agn
// find largest numbers' node
// set node's index to current index
