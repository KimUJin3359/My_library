# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: woojikim <woojikim@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/21 22:30:10 by woojikim          #+#    #+#              #
#    Updated: 2020/12/21 22:59:20 by woojikim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c

OBJS = ${SRCS:.c=.o}

all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -c $(SRCS) libft.h
	ar rs $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS) libft.h.gch

fclean : clean
	rm -rf $(NAME)

re : fclean all
