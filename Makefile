# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/21 10:28:39 by kmacquet          #+#    #+#              #
#    Updated: 2021/01/21 11:08:22 by kmacquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./includes
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
ARRCS = ar -rcs
RM = rm -f

all: $(NAME)

.c.o:
		$(CC) $(CFLAGS) -o $(<:.c=.o) -c $<

$(NAME): $(OBJS)
		$(ARRCS) $@ $(OBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
