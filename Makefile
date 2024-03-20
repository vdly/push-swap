# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: johii <johii@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/15 19:04:38 by johii             #+#    #+#              #
#    Updated: 2024/03/20 18:24:54 by johii            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	push_swap
LIBFT		:=	$(wildcard libft/*.c)
PRINTF		:=	$(wildcard libft/ft_printf/*.c)
LINKLIST	:=	$(wildcard link_list/*.c)

PS_SRCS		:=	push_swap.c \
				srcs/index.c \
				srcs/error_check.c \
				srcs/simple_sorts.c \
				srcs/radix_sort.c \
				srcs/utils.c \
				operations/push.c \
				operations/rev_rotate.c \
				operations/rotate.c \
				operations/swap.c \
				

LIBFT_OBJ := $(patsubst %.c, %.o, $(LIBFT))

PRINTF_OBJ := $(patsubst %.c, %.o, $(PRINTF))

LLIST_OBJ := $(patsubst %.c, %.o, $(LINKLIST))

PS_OBJ := $(patsubst %.c, %.o, $(PS_SRCS))

ALL_OBJ		:=	$(LIBFT_OBJ) $(PRINTF_OBJ) $(LLIST_OBJ) $(PS_OBJ)

CC			:=	cc
CFLAGS		:=	-Wall -Wextra -Werror
RM			:=	rm -rf

all			:	$(NAME)

$(NAME)		:	$(ALL_OBJ)
				$(CC) $(CFLAGS) $(ALL_OBJ) -o $(NAME)

clean		:	
				$(RM) $(ALL_OBJ)

fclean		:	clean
				$(RM) $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re
