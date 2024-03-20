/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 02:36:01 by johii             #+#    #+#             */
/*   Updated: 2024/03/13 18:51:12 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	sorted(t_list *stack)
{
	stack = stack->next;
	while (stack)
	{
		if (stack->prev->index > stack->index)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	push_top(t_list **stack_a, t_list **stack_b, int size, int idx)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = *stack_a;
	while (i++ <= size && temp->index != idx)
		temp = temp->next;
	if ((size / 2) >= i)
	{
		while (i-- > 1)
			rotate(stack_a, stack_b, 1);
	}
	else
		while ((*stack_a)->index != temp->index)
			rev_rotate(stack_a, stack_b, 1);
}
