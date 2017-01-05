/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 20:02:14 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/04 20:28:11 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	printstr(int width, char a, char b, char c)
{
	int synum;

	synum = 1;
	while (synum <= width)
	{
		if (synum == 1)
			ft_putchar(a);
		else if (synum == width)
			ft_putchar(c);
		else
			ft_putchar(b);
		synum++;
	}
	if (width > 0)
		ft_putchar('\n');
}

void	check(int width, char a, char b, char c)
{
	if (width == 1)
	{
		ft_putchar(a); 
		ft_putchar('\n');
	}
	else if (width == 2)
	{
		ft_putchar(a);
		ft_putchar(c);
		ft_putchar('\n');
	}
	else
		printstr(width, a, b, c);
}

void	rush(int x, int y)
{
	int strnum;

	strnum = 1;
	while (strnum <= y)
	{
		if (strnum == 1)
		{
			check(x, 'A', 'B', 'C');
		}
		else if (strnum == y)
		{
			check(x, 'A', 'B', 'C');
		}
		else
			check(x, 'B', ' ', 'B');
		strnum++;
	}
}
