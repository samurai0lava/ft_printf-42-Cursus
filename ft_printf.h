/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouhssei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:09:26 by iouhssei          #+#    #+#             */
/*   Updated: 2023/11/27 10:10:57 by iouhssei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <inttypes.h>

int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_putnbr_base(long nbr, int base, int check);
int		ft_putptr(void *ptr);
int		ft_printf(const char *format, ...);
char	*ft_strchr(const char *s, int c);

#endif
