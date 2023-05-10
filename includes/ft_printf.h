/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejacquel <ejacquel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 03:42:08 by ejacquel          #+#    #+#             */
/*   Updated: 2023/03/21 04:15:11 by ejacquel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define HEX "0123456789abcdef0123456789ABCDEF"

int	ft_printf(const char *format, ...);
int	get_format(char c, va_list ap);
int	print_hexadecimal(unsigned int n, int *len, int c);
int	print_pointeur(unsigned long int var, int *len);
int	print_decimal_nb(int n, int *len);
int	print_unsigned_decimal(unsigned int n, int *len);
int	print_c(int c);
int	ft_putstr(char *str);

#endif
