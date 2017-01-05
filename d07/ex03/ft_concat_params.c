/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 20:50:52 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/08 20:50:55 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		findlen(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 1;
	j = 0;
	size = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			size++;
			j++;
		}
		j = 0;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char		*result;
	int			size;
	int			p;
	int			i;
	int			j;

	size = findlen(argc, argv);
	result = (char*)malloc(sizeof(*result) * size);
	i = 1;
	p = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			result[p] = argv[i][j];
			j++;
			p++;
		}
		result[p] = '\n';
		p++;
		i++;
	}
	result[p - 1] = '\0';
	return (result);
}
