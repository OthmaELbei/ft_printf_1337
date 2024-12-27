/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 11:35:26 by oelbied           #+#    #+#             */
/*   Updated: 2024/12/27 09:45:56 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

static int	ft_lter(char c, va_list cont)
{
	int	ct;

	ct = 0;
	if (c == 'd' || c == 'i')
		ct += ft_putnbr(va_arg(cont, int));
	else if (c == 'u')
		ct += ft_unsinl(va_arg(cont, unsigned int));
	else if (c == 'c')
		ct += ft_putchar(va_arg(cont, int));
	else if (c == 's')
		ct += ft_putstr(va_arg(cont, char *));
	else if (c == 'p')
	{
		ct += ft_putstr("0x");
		ct += ft_hex_des(va_arg(cont, unsigned long));
	}
	else if (c == 'x')
		ct += ft_hex_des(va_arg(cont, unsigned int));
	else if (c == 'X')
		ct += ft_uphex_des(va_arg(cont, unsigned int));
	return (ct);
}

static int	ft_ts(const char *count, va_list countptr)
{
	int		contt;
	int		i;

	contt = 0;
	i = 0;
	while (count[i] && (count[i + 1] || count[i] != '%'))
	{
		if (count[i] == '%' && count[i + 1] == '%')
		{
			contt += ft_putchar('%');
			i += 2;
		}
		else if (count[i] == '%' && count[i + 1])
		{
			contt += ft_lter(count[i + 1], countptr);
			i += 2;
		}
		else
			contt += ft_putchar(count[i++]);
	}
	return (contt);
}

int	ft_printf(const char *count, ...)
{
	va_list	countptr;
	int		contt;
	int		i;

	contt = 0;
	i = 0;
	if (write(1, 0, 0) == -1)
		return (-1);
	va_start(countptr, count);
	contt = ft_ts(count, countptr);
	va_end(countptr);
	return (contt);
}
