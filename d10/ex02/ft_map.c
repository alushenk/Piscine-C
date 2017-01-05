/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 16:13:05 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/13 16:13:11 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *result;
	int i;

	result = (int*)malloc(sizeof(*result) * length);
	i = 0;
	while (length--)
	{
		result[i] = f(tab[i]);
		i++;
	}
	return (result);
}
