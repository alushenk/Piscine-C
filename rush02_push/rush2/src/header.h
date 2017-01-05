/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/14 20:06:55 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/14 20:09:42 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef	struct		s_list
{
	struct s_list	*next;
	char			data;
}					t_list;

t_list	*ft_create_elem(char data);
void	ft_list_push_front(t_list **begin_list, char data);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		check(t_list *l, int heigth, int width);
void	print_size(int heigth, int width);
#endif
