/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_des.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:12:31 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/26 12:57:54 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_des(unsigned long n)
{
	int		cont;
	char	*hx;

	cont = 0;
	hx = "0123456789abcdef";
	if (n >= 16)
	{
		cont += ft_hex_des(n / 16);
	}
	cont += ft_putchar(hx[n % 16]);
	return (cont);
}
