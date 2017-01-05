/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 20:35:14 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/03 20:35:57 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int res;

	res = nb;
	if (power <= 0 || nb == 0)
		return (0);
	else
	{
		while (power >= 2)
		{
			res = res * nb;
			power = power - 1;
		}
		return (res);
	}
}
