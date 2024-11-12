/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:23:09 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/12 22:36:25 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_putaddress(unsigned long address)
{
    char *hexa;
    int len;

    hexa = "0123456789abcdef";
    len = 0;
    if (address >= 16)
        len += ft_putaddress(address / 16);
    len += ft_putchar(hexa[address % 16]);
    return len;
}