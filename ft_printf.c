/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:17:50 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/12 13:56:46 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int ft_printf_helper()
{
    
}

static int ft_issep(char c)
{
    int i;

    i = 0;
    while (PRINTF_SPECIFIERS[i])
    {
        if (PRINTF_SPECIFIERS[i] == c)
            return (1);
        i++;
    }
    return (0);
}
int ft_printf(const char *str, ...)
{
    va_list args;
    int i;
    int bytes;

    i = 0;
    bytes = 0;
    va_start(args,str);
    while (str[i])
    {
        if (str[i] == '%' && ft_issep(str[i + 1]))
            bytes += ft_printf_helper(args,str[i+ 1]);
        else
            bytes += ft_putchar(str[i]);
        i++;
    }
    va_end(args);
    return (bytes);
}