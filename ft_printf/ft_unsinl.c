/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsinl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 13:09:13 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/24 23:22:12 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

int	ft_unsinl(unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n >= 10)
	{
		count += ft_unsinl(n / 10);
		count += ft_unsinl(n % 10);
	}
	else
	{
		ft_putchar((n % 10) + '0');
		count++;
	}
	return (count);
}
