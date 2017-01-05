/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 16:01:20 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/08 16:01:27 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *result;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int*)malloc(sizeof(int) * (max - min));
	if (!result)
		return (0);
	i = 0;
	while (min < max)
	{
		result[i] = min;
		min++;
		i++;
	}
	result[i] = '\0';
	*range = result;
	return (i);
}
