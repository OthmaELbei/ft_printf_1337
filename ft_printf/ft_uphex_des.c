/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uphex_des.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:21:18 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/24 23:22:36 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_uphex_des(unsigned int n)
{
	int		cont;
	char	*hx;

	cont = 0;
	hx = "0123456789ABCDEF";
	if (n >= 16)
	{
		cont += ft_uphex_des(n / 16);
	}
	cont += ft_putchar(hx[n % 16]);
	return (cont);
}
