# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alushenk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/13 13:22:52 by alushenk          #+#    #+#              #
#    Updated: 2016/09/13 13:22:54 by alushenk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = rush0

OBJ = main.o rush0.o ft_putchar.o rush01.o rush02.o rush03.o rush04.o

all: $(NAME)
	
$(NAME):
	gcc -c main.c ft_putchar.c rush00.c rush01.c rush02.c rush03.c rush04.c
	gcc main.o rush00.o ft_putchar.o -o rush00
	gcc main.o rush01.o ft_putchar.o -o rush01 
	gcc main.o rush02.o ft_putchar.o -o rush02 
	gcc main.o rush03.o ft_putchar.o -o rush03 
	gcc main.o rush04.o ft_putchar.o -o rush04 
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
	