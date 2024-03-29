/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 16:28:17 by johii             #+#    #+#             */
/*   Updated: 2024/03/20 17:52:33 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	error_check(char **str)
{
	int			i;
	long int	num;

	i = 0;
	if (str[i] == NULL)
		return (ft_putendl_fd("Error", 2), 0);
	while (str[i])
	{
		num = ft_atol(str[i]);
		if (!check_alpha(str[i]))
			return (ft_putendl_fd("Error", 2), 0);
		if (!duplicate(str, i, num))
			return (ft_putendl_fd("Error", 2), 0);
		if (num < INT_MIN || num > INT_MAX)
			return (ft_putendl_fd("Error", 2), 0);
		i++;
	}
	return (1);
}
// return 1 if any errors are found
// return 0 if there are no errors

int	check_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
// Return 0 if a non-digit character is found
// Return 1 if all characters are digits

int	duplicate(char **av, int i, int number)
{
	i++;
	while (av[i])
	{
		if (atoi(av[i]) == number)
			return (0);
		i++;
	}
	return (1);
}
// Return 0 if a duplicate is found
// Return 1 if no duplicates are found

// Understanding String Parsing in C Language 

// String parsing is a process of breaking down a string into smaller 
// components, such as words or phrases, to extract specific information.
// In C programming, string parsing is done using srcstions that allow
// you to search, extract, and manipulate strings.
