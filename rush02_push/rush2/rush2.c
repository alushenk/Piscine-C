/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 22:16:01 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/18 22:16:08 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/header.h"

int		width_one(char c)
{
	if (c == 'o')
	{
		ft_putstr("[Rush 00] ");
		return (1);
	}
	if (c == '\\')
	{
		ft_putstr("[Rush 01] ");
		return (1);
	}
	if (c == 'C')
	{
		ft_putstr("[Rush 02] || [Rush 04] ");
		return (1);
	}
	ft_putstr("[Rush 03] ");
	return (1);
}

int		height_one(char c)
{
	if (c == 'o')
	{
		ft_putstr("[Rush 00] ");
		return (1);
	}
	if (c == '\\')
	{
		ft_putstr("[Rush 01] ");
		return (1);
	}
	if (c == 'C')
	{
		ft_putstr("[Rush 03] || [Rush 04] ");
		return (1);
	}
	ft_putstr("[Rush 02] ");
	return (1);
}

int		one_one(char c)
{
	if (c == 'o')
	{
		ft_putstr("[Rush 00] ");
		return (1);
	}
	if (c == '/')
	{
		ft_putstr("[Rush 01] ");
		return (1);
	}
	ft_putstr("[Rush 02] || [Rush 03] || [Rush 04] ");
	return (1);
}

int		higher_one(char c, t_list *l)
{
	if (c == 'o')
	{
		ft_putstr("[Rush 00] ");
		return (1);
	}
	if (c == '/')
	{
		ft_putstr("[Rush 01] ");
		return (1);
	}
	if (c == 'A')
	{
		ft_putstr("[Rush 04] ");
		return (1);
	}
	if (c == 'C')
		while (l->next)
		{
			l = l->next;
			if (l->data == 'C')
			{
				ft_putstr("[Rush 02] ");
				return (1);
			}
			if (l->data == 'A')
			{
				ft_putstr("[Rush 03] ");
				return (1);
			}
		}
	return (0);
}

int		check(t_list *l, int heigth, int width)
{
	char	c;
	int		res;

	l = l->next;
	c = l->data;
	res = 0;
	if (heigth > 1 && width == 1)
		res = width_one(c);
	if (heigth == 1 && width > 1)
		res = height_one(c);
	if (heigth == 1 && width == 1)
		res = one_one(c);
	if (heigth > 1 && width > 1)
		res = higher_one(c, l);
	return (res);
}
