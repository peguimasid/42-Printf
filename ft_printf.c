/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:18:50 by gmasid            #+#    #+#             */
/*   Updated: 2022/06/07 18:19:20 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	va_list	list;

	va_start(list, format);
	for (int i = 0; i < 3; i++)
		printf("%d\n", va_arg(list, int));
	va_end(list);
	return (0);
}
