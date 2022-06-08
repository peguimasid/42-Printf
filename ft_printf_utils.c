/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:07:40 by gmasid            #+#    #+#             */
/*   Updated: 2022/06/08 14:08:08 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	while (str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (i);
}

int	ft_print_int(int nbr)
{
	int		nbr_len;
	char	*convert;

	nbr_len = 0;
	convert = ft_itoa(nbr);
	nbr_len = ft_print_str(convert);
	free(convert);
	return (nbr_len);
}

int	ft_print_uint(unsigned int n)
{
	int		put_len;
	char	*convert;

	put_len = 0;
	convert = ft_utoa(n);
	put_len += ft_print_str(convert);
	free(convert);
	return (put_len);
}
