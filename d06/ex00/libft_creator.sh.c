#!/bin/sh
gcc -c ft_atoi.c ft_putstr.c ft_strlen.c ft_strstr.c ft_putchar.c ft_strcapitalize.c ft_strlowcase.c ft_strupcase.c ft_putnbr.c  ft_strcmp.c  ft_strncmp.c  ft_swap.c
ar rc libft.a ft_putnbr.o ft_strcmp.o ft_swap.o ft_atoi.o ft_strlen.o ft_strlowcase.o ft_strcapitalize.o ft_putstr.o ft_strupcase.o ft_strstr.o ft_putchar.o ft_strncmp.o