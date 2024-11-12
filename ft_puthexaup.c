/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexaup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 22:05:56 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/12 22:17:21 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_puthexaup(unsigned int address)
{
    char *hexa;
    int len;

    hexa = "0123456789ABCDEF";
    len = 0;
    if (address >= 16)
        len += ft_puthexaup(address / 16);
    len += ft_putchar(hexa[address % 16]);
    return len;
}