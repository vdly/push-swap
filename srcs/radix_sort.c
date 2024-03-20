/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 16:16:11 by johii             #+#    #+#             */
/*   Updated: 2024/03/15 13:22:55 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
	srcstion: int count_bits(int size)
	-----------------------------------
	Counts the number of bits_pos required to represent an integer 'size'.

	Parameters:
	 - int size: The integer whose bits_pos are to be counted.

	Returns:
	 - int: The number of bits_pos required to represent 'size'.
*/
int	count_bits(int size)
{
	int	i;

	i = 0;
	while ((size >> i) != '\0')
		i++;
	return (i);
}

/*
	srcstion: void	radix_sort(t_list **stack_a, t_list **stack_b)
	-----------------------------------------------------------
	Sorts the elements in 'stack_a' using the radix sort algorithm.

	Parameters:
	 - t_list **stack_a: A pointer to a pointer to the head of the first stack.
	 - t_list **stack_b: A pointer to a pointer to the head of the second stack.
*/
void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	bit_pos;
	int	size;
	int	max_bit;

	bit_pos = 0;
	size = lst_size(*stack_a);
	max_bit = count_bits(size);
	while (bit_pos < max_bit)
	{
		i = 0;
		while (i < size)
		{
			if (((*stack_a)->index >> bit_pos) & 1)
				rotate(stack_a, stack_b, 1);
			else
				push(stack_a, stack_b, 1);
			i++;
		}
		while (*stack_b)
			push(stack_a, stack_b, 2);
		bit_pos++;
	}
}
// iterate through each bit to sort
// iterate through each elements in stack_a 
// if bit = 0, then rotate element 
// if bit = 1, then push to stack_b 
// push all elements from stack_b back to stack_a