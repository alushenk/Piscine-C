/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 21:16:57 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/06 21:17:06 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int to_find_len;

	to_find_len = 0;
	while (to_find[to_find_len])
		to_find_len++;
	if (to_find_len == 0)
		return (str);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (j == (to_find_len - 1))
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
