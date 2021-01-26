# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmacquet <kmacquet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/21 10:28:39 by kmacquet          #+#    #+#              #
#    Updated: 2021/01/26 17:01:42 by kmacquet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I./includes
SRCS = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlen.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
		ft_isprint.c ft_toupper.c ft_tolower.c ft_strchr.c \
		ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
		ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_itoa.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_strmapi.c ft_split.c
OBJS = $(SRCS:.c=.o)
BON = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
		ft_lstmap.c
BOBJS = $(BON:.c=.o)
ARRCS = ar -rcs
RM = rm -f

all: $(NAME)

.c.o:
		$(CC) $(CFLAGS) -o $(<:.c=.o) -c $<

$(NAME): $(OBJS)
		$(ARRCS) $@ $(OBJS)

bonus: $(BOBJS)
		$(ARRCS) $(NAME) $(BOBJS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all
