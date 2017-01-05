/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 22:08:40 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/14 22:08:42 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*result;
	int		count;

	count = 0;
	result = begin_list;
	if (result)
	{
		while (result)
		{
			result = result->next;
			count++;
		}
	}
	return (count);
}
