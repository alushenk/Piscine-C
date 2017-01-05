/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 21:35:10 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/14 21:35:13 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_list_push_front(t_list **begin_list, char data)
{
	t_list *result;

	if (*begin_list)
	{
		result = ft_create_elem(data);
		result->next = *begin_list;
		*begin_list = result;
	}
	else
		*begin_list = ft_create_elem(data);
}
