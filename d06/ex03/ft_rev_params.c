/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/07 16:40:24 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/07 16:40:28 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int j;

	argc--;
	while (argc > 0)
	{
		j = 0;
		while (argv[argc][j])
		{
			ft_putchar(argv[argc][j]);
			j++;
		}
		ft_putchar('\n');
		argc--;
	}
	return (0);
}
