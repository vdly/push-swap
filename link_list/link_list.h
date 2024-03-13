/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_list.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johii <johii@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:09:43 by johii             #+#    #+#             */
/*   Updated: 2024/03/01 14:49:44 by johii            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINK_LIST_H
# define LINK_LIST_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				number;
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

t_list	*add_new(int number);
void	add_first(t_list **head, t_list *new_node);
int		lst_size(t_list *lst);
t_list	*lst_last(t_list *lst);
void	add_last(t_list **head, t_list *new_node);
void	del_one(t_list *lst);
void	lst_clear(t_list **head);

#endif