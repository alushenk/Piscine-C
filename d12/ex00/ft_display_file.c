/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/15 17:56:15 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/15 17:56:19 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		check(int argc)
{
	if (argc == 1)
	{
		ft_putstr("File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr("Too many arguments.\n");
		return (1);
	}
	return (0);
}

void	print_data(char *name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("open() failed\n");
	}
	else
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(buf);
		}
		if (close(fd) == -1)
		{
			ft_putstr("close failed\n");
		}
	}
}

int		main(int argc, char **argv)
{
	int len;

	if (check(argc))
		return (0);
	len = 0;
	while (argv[1][len])
		len++;
	if (len < 1)
		return (0);
	print_data(argv[1]);
	return (0);
}
