/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:24:11 by gmasid            #+#    #+#             */
/*   Updated: 2022/06/08 15:24:17 by gmasid           ###   ########.fr       */
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
	len_printed = printf("pointer => '%p'\n", &ptr);
	ft_printf("printou => %d caractéres\n", len_printed);
}
