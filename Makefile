# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntothmur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/02 14:46:11 by ntothmur          #+#    #+#              #
#    Updated: 2019/02/03 17:17:23 by ntothmur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRC = 	check.c 		\
		fillit.c 		\
		work_with_map.c \
		coord.c			\
		print_map.c		\
		main.c			\



OBJECTS = 	$(SRC:.c=.o)

LIBFT = ./libft/libft.a

INCLUDES = fillit.h

FLAGS = -Wall -Wextra -Werror -c -I

all: $(NAME)

$(LIBFT):
		$(MAKE) -C libft/

$(OBJECTS): %.o:%.c
		gcc $(FLAGS) $(INCLUDES) -o $@ -c $<

$(NAME): $(LIBFT) $(OBJECTS)
		gcc -o $(NAME) $(OBJECTS) $(LIBFT)

clean:
		$(MAKE) -C libft/ clean
		rm -f $(OBJECTS)

fclean: clean
		$(MAKE) -C libft/ fclean
		rm -f $(NAME)

re: fclean all
