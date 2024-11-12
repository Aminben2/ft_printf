/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:55:53 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/12 22:13:18 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthexa(unsigned int address)
{
    char *hexa;
    int len;

    hexa = "0123456789abcdef";
    len = 0;
    if (address >= 16)
        len += ft_puthexa(address / 16);
    len +=  ft_putchar(hexa[address % 16]);
    return len;
}