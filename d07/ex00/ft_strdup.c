/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 10:42:30 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/08 14:19:28 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char		*result;
	int			size;
	int			i;

	i = 0;
	size = 0;
	while (src[size])
		size++;
	result = (char*)malloc(sizeof(*result) * (size)); 
	//надо добавить size + 1 ибо массив создается длинной 4, а надо 5(например) 
	//проверил в визуализаторе, это точно.
	if (!result)
		return (NULL);
	while (i < size)
	{
		result[i] = src[i];
		i++;
	}
	result[size] = '\0';
	//нуль-терминатор пишется в не существующую 5 ячейку памяти, эрьорь
	return (result);
}
