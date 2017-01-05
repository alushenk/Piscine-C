# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alushenk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/13 13:22:52 by alushenk          #+#    #+#              #
#    Updated: 2016/09/18 22:16:35 by alushenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush2

SRC = main.c rush2.c src/ft_put.c src/ft_create_elem.c src/ft_list_push_front.c

OBJ = main.o rush2.o ft_put.o ft_create_elem.o ft_list_push_front.o

CFLAGS = -c -Wall -Wextra -Werror

all: $(NAME)
	
$(NAME):
	gcc $(CFLAGS) $(SRC) -I header.h
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
