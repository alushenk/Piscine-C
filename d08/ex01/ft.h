/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alushenk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/10 20:47:09 by alushenk          #+#    #+#             */
/*   Updated: 2016/09/10 20:47:14 by alushenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
char	*ft_strcapitalize(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strlowcase(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strupcase(char *str);
void	ft_swap(int *a, int *b);

#endif
