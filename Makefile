# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 11:15:51 by dagarmil          #+#    #+#              #
#    Updated: 2024/06/21 15:38:25 by dagarmil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
OBJS = ft_isdigit.o \
       ft_isalpha.o \
       ft_isalnum.o \
       ft_isascii.o \
       ft_isprint.o \
       ft_strlen.o \
       ft_memset.o \
       ft_bzero.o \
       ft_memcpy.o \
       ft_tolower.o \
       ft_toupper.o

all: $(NAME)

$(NAME) : $(OBJS)
	ar rcs $@ $(OBJS)

%.o : %.c
	cc -c -I./libft.h $(CFLAGS) $< -o $@

clean:
	rm -rf ./*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re
