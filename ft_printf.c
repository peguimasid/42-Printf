/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:18:50 by gmasid            #+#    #+#             */
/*   Updated: 2022/06/07 19:07:55 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_match(va_list args, char match)
{
	int	result;

	result = 0;
	if (match == 'c')
		ft_putchar(va_arg(args, int));
	return (result);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		len_printed;
	int		i;

	len_printed = 0;
	i = 0;
	va_start(args, s);
	while (s[i])
	{
		if (s[i] == '%')
			len_printed += format_match(args, s[++i]);
		else
			len_printed += ft_putchar(s[i]);
		i++;
	}
	va_end(args);
	return (len_printed);
}
