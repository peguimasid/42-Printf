/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:18:50 by gmasid            #+#    #+#             */
/*   Updated: 2022/06/08 13:00:39 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_match(va_list args, char match)
{
	int	result;

	result = 0;
	if (match == 'c')
		result += ft_putchar(va_arg(args, int));
	if (match == 'i' || match == 'd')
		result += ft_print_int(va_arg(args, int));
	// if(match == 's')
	// if(match == 'p')
	// if(match == 'u')
	// if(match == 'x')
	// if(match == 'X')
	if (match == '%')
		result += ft_putchar('%');
	return (result);
}

int	ft_printf(const char *s, ...)
{
	int		result;
	va_list	args;
	int		i;

	result = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			result += format_match(args, s[++i]);
		else
			result += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (result);
}
