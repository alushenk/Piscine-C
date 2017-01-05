/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 20:04:49 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/14 20:04:56 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list *result;

	result = (t_list*)malloc(sizeof(t_list));
	if (result)
	{
		result->data = data;
		result->next = NULL;
	}
	return (result);
}
