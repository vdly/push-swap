/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 19:04:28 by johii             #+#    #+#             */
/*   Updated: 2024/03/21 19:05:13 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	**args;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
		args = av + 1;
	if (!error_check(args))
		return (1);
	stack_init(ac, args, &stack_a);
	indexing(stack_a);
	simple_sorts(&stack_a, &stack_b, lst_size(stack_a));
	if (!sorted(stack_a))
		radix_sort(&stack_a, &stack_b);
	lst_clear(&stack_a);
	lst_clear(&stack_b);
}

void	stack_init(int ac, char **args, t_list **stack_a)
{
	int		i;
	int		j;

	i = 0;
	while (args[i] != NULL)
		add_last(stack_a, add_new(ft_atoi(args[i++])));
	if (ac == 2)
	{
		j = 0;
		while (args[j] != NULL)
			free(args[j++]);
		free(args);
	}
}
