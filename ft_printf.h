/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:19:46 by gmasid            #+#    #+#             */
/*   Updated: 2022/06/08 14:00:22 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(int c);
int	ft_print_str(char *str);
int	ft_print_int(int n);
int	ft_print_uint(unsigned int n);
// int	print_percent(void);
// int	print_ptr(unsigned long ptr);
// int	print_hexa(unsigned int n, const char format);

#endif