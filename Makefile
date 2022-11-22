# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoste <ccoste@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/16 13:41:19 by ccoste            #+#    #+#              #
#    Updated: 2022/11/21 16:46:33 by ccoste           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=ft_atoi.c \
	ft_isprint.c \
	ft_putchar_fd.c \
	ft_bzero.c \
	ft_putendl_fd.c \
	ft_strjoin.c \
	ft_strrchr.c \
	ft_memchr.c \
	ft_strlcat.c \
	ft_strtrim.c \
	ft_isalnum.c \
	ft_memcmp.c \
	ft_putstr_fd.c \
	ft_strlcpy.c \
	ft_substr.c \
	ft_isalpha.c \
	ft_memcpy.c \
	ft_strlen.c \
	ft_tolower.c \
	ft_isascii.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_toupper.c \
	ft_isdigit.c \
	ft_memset.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_itoa.c \
	ft_calloc.c \
	ft_putnbr_fd.c \
	ft_strnstr.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_split.c

BONUS=ft_lstadd_front.c \
	ft_lstclear.c \
	ft_lstdelone.c \
	ft_lstiter.c \
	ft_lstadd_back.c \
	ft_lstlast.c \
	ft_lstmap.c \
	ft_lstnews.c \
	ft_lstsize.c

OBJ= $(SRC:.c=.o)
BONUSOBJ= $(BONUS:.c=.o)

all:
	$(CC) $(CFLAGS) -c $(SRC) libft.h
	ar -rc libft.a $(OBJ)

$(NAME) : $(OBJ)
	$(CC) -o $(NAME) $^

%.o : %.c
	$(CC) -o $@ -c $^

clean :
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all

bonus: $(BONUS_OBJS)
		$(CC) $(CFLAGS) -c $(BONUS) libft.h
		ar -rc libft.a $(BONUS_OBJS)

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
