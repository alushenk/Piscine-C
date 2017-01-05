/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 23:08:27 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/14 23:08:29 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *result;

	result = begin_list;
	if (result)
	{
		while (result->next)
		{
			result = result->next;
		}
		return (result);
	}
	else
		return (0);
}
