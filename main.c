/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:24:11 by gmasid            #+#    #+#             */
/*   Updated: 2022/06/09 13:21:49 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	len_printed;
	int	*ptr;

	ptr = 0;
	len_printed = 0;
	ft_printf("/\\/\\/\\/\\/\\/\\/\\/\\\n");
	len_printed = printf("test or => '%x'\n", 7562);
	len_printed = printf("test or => '%X'\n", 7562);
	ft_printf("printou => %d caractéres\n", len_printed);
	len_printed = ft_printf("test my => '%x'\n", 7562);
	len_printed = ft_printf("test my => '%X'\n", 7562);
	ft_printf("printou => %d caractéres\n", len_printed);
}
