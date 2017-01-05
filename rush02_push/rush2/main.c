/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 22:18:16 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/18 22:18:19 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/header.h"

void	print_size(int heigth, int width)
{
	ft_putchar('[');
	ft_putnbr(heigth);
	ft_putstr("] [");
	ft_putnbr(width);
	ft_putstr("]\n");
}

int		main(void)
{
	char	buf[1];
	int		ret;
	int		heigth;
	int		width;
	int		size;
	t_list	*list;

	heigth = 0;
	width = 0;
	list = ft_create_elem('.');
	size = 0;
	while ((ret = read(0, buf, 1)))
	{
		size++;
		ft_list_push_front(&list, buf[0]);
		if (buf[0] == '\n')
		{
			if (!width)
				width = size - 1;
			heigth++;
		}
	}
	if (check(list, heigth, width))
		print_size(heigth, width);
	else
		ft_putstr("aucune");
	return (0);
}
