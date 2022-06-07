/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:19:46 by gmasid            #+#    #+#             */
/*   Updated: 2022/06/07 19:08:39 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(int c);
// int	print_str(char *str);
// int	print_nbr(int n);
// int	print_unbr(unsigned int n);
// int	print_percent(void);
// int	print_ptr(unsigned long ptr);
// int	print_hexa(unsigned int n, const char format);

#endif