/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iouhssei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:24:25 by iouhssei          #+#    #+#             */
/*   Updated: 2023/11/27 21:15:34 by iouhssei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	len;

	if (str == NULL)
	{	
		write (1, "(null)", 6);
		return (6);
	}
	len = 0;
	while (*str != '\0')
	{	
		len += write(1, str, 1);
		str++;
	}
	return (len);
}
