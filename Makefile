# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 11:15:51 by dagarmil          #+#    #+#              #
#    Updated: 2024/06/26 12:25:08 by dagarmil         ###   ########.fr        #
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
       ft_toupper.o \
       ft_memmove.o \
       ft_strlcpy.o \
       ft_strlcat.o \
       ft_strchr.o \
       ft_strrchr.o \
       ft_strncmp.o \
       ft_memchr.o \
       ft_memcmp.o \
       ft_strnstr.o \
       ft_atoi.o

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
