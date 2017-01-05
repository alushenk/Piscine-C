/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 20:03:21 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/14 20:03:25 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *result;

	result = *begin_list;
	if (result)
	{
		while (result->next)
			result = result->next;
		result->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
