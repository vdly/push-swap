/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple_sorts.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 13:12:41 by johii             #+#    #+#             */
/*   Updated: 2024/03/13 19:14:07 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_three(t_list **stack_a, t_list **stack_b)
{
	if (sorted(*stack_a))
		return ;
	if ((*stack_a)->index > (*stack_a)->next->index)
	{
		rotate(stack_a, stack_b, 1);
	}
	if ((*stack_a)->index > (*stack_a)->next->index)
	{
		if ((*stack_a)->index > (*stack_a)->next->next->index)
		{
			rev_rotate(stack_a, stack_b, 1);
		}
		else
			swap(stack_a, stack_b, 1);
	}
	if ((*stack_a)->index > (*stack_a)->next->next->index)
		rotate(stack_a, stack_b, 1);
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	if (sorted(*stack_a))
		return ;
	push_top(stack_a, stack_b, lst_size(*stack_a), 2);
	push(stack_a, stack_b, 1);
	sort_three(stack_a, stack_b);
	push(stack_a, stack_b, 2);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	if (sorted(*stack_a))
		return ;
	push_top(stack_a, stack_b, lst_size(*stack_a), 1);
	push(stack_a, stack_b, 1);
	push_top(stack_a, stack_b, lst_size(*stack_a), 2);
	push(stack_a, stack_b, 1);
	sort_three(stack_a, stack_b);
	push(stack_a, stack_b, 2);
	push(stack_a, stack_b, 2);
}

void	simple_sorts(t_list **stack_a, t_list **stack_b, int stack_size)
{
	if (stack_size == 3 && (*stack_a)->number > (*stack_a)->next->number)
	{
		swap(stack_a, stack_b, 1);
	}
	else if (stack_size == 4)
	{
		sort_three(stack_a, stack_b);
	}
	else if (stack_size == 5)
	{
		sort_four(stack_a, stack_b);
	}
	else if (stack_size == 6)
	{
		sort_five(stack_a, stack_b);
	}
}
