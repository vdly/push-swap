/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:04:28 by johii             #+#    #+#             */
/*   Updated: 2024/03/15 19:24:49 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**args;
	int		i;

	i = 0;
	stack_a = NULL;
	stack_b = NULL;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = av + 1;
	if (ac == 1 || !error_check(args))
		return (1);
	while (args[i] != NULL)
		add_last(&stack_a, add_new(ft_atoi(args[i++])));
	indexing(stack_a);
	simple_sorts(&stack_a, &stack_b, lst_size(stack_a));
	if (!sorted(stack_a))
		radix_sort(&stack_a, &stack_b);
	lst_clear(&stack_a);
	lst_clear(&stack_b);
}

void	init_stack(t_list *stack_a, int ac, char **av)
{
	int		i;
	char	**args;

	i = 0;
	if (ac == 2)
		args = ft_split(av[i], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i++])
		add_last(&stack_a, add_new(ft_atoi(av[i])));
	if (ac == 2)
		lst_clear(&stack_a);
}
