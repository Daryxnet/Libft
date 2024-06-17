# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagarmil <dagarmil@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/13 11:15:51 by dagarmil          #+#    #+#              #
#    Updated: 2024/06/17 14:53:06 by dagarmil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
all: $(NAME)
CFLAGS = -Wall -Wextra -Werror

OBJS = ft_isdigit.o ft_isalpha.o

libft.a : $(OBJS)
	ar rcs $@ $<

%.o : %.c
	cc -c -I./libft.h $(CFLAGS) $< -o $@

clean:
	rm -rf ./*.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
.PHONY: all clean fclean re
