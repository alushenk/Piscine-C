/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 20:01:08 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/10 20:01:15 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int		ft_words(char *str)
{
	int		words;
	int		i;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
			i++;
		if (str[i] && !(str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
			words++;
		while (str[i] && !(str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
			i++;
	}
	return (words);
}

char	**ft_split_whitespaces(char *str)
{
	char			**tab;
	unsigned int	i;
	int				x;

	x = 0;
	tab = (char**)malloc(sizeof(char*) * (ft_words(str) + 1));
	tab[ft_words(str)] = NULL;
	if (!tab)
		return (tab);
	while (*str)
	{
		while (*str == '\t' || *str == '\n' || *str == ' ')
			str++;
		i = 0;
		while (str[i] && !(str[i] == '\t' || str[i] == '\n' || str[i] == ' '))
			i++;
		if (i)
		{
			tab[x] = (char*)malloc(sizeof(char) * (i + 1));
			tab[x][i] = '\0';
			ft_strncpy(tab[x++], str, i);
			str = str + i;
		}
	}
	return (tab);
}
