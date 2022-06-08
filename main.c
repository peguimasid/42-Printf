/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmasid <gmasid@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 17:24:11 by gmasid            #+#    #+#             */
/*   Updated: 2022/06/08 12:53:58 by gmasid           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	len_printed;

	len_printed = 0;
	len_printed = ft_printf("A letra '%c' é a primeira do meu nome\n", 'G');
	printf("printou %d caracteres", len_printed);
	len_printed = ft_printf("Minha idade é '%i' anos\n", 19);
	printf("printou %d caracteres", len_printed);
}
