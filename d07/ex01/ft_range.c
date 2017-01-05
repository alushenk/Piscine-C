/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 14:21:40 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/08 14:21:43 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *result;
	int size;
	int i;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	result = (int*)malloc(sizeof(*result) * (size));
	if (!result)
		return (0);
	i = 0;
	while (i < size)
	{
		result[i] = min;
		min++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
