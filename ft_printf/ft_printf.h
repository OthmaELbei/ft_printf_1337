/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 17:09:04 by oelbied           #+#    #+#             */
/*   Updated: 2024/11/26 14:14:07 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h> 

int		ft_putnbr(int n);
int		ft_printf(const char *count, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
int		ft_unsinl(unsigned int n);
int		ft_hex_des(unsigned long n);
int		ft_uphex_des(unsigned int n);

#endif
