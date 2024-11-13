/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:17:50 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/13 10:36:07 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_printf_helper(va_list *args, char spec)
{
    int len;
    
    len = 0;
    if (spec == 'c')
        return ft_putchar(va_arg(*args, int));
    else if (spec == '%')
        return ft_putchar('%');
    else if (spec == 's')
        return ft_putstr(va_arg(*args, char *));
    else if (spec == 'i' || spec == 'd')
        return ft_put_signed_integer(va_arg(*args, int));
    else if (spec == 'u')
        return ft_put_unsigned_integer(va_arg(*args, unsigned int));
    else if (spec == 'X')
        return ft_puthexaup(va_arg(*args, unsigned int));
    else if (spec == 'x')
        return ft_puthexa(va_arg(*args, unsigned int));
    else if (spec == 'p')
    {
        len += ft_putstr("0x") + ft_putaddress(va_arg(*args,unsigned long));
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
    va_start(args, str);
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            bytes += ft_printf_helper(&args, str[i]);
        }
        else
            bytes += ft_putchar(str[i]);
        i++;
    }
    va_end(args);
    return (bytes);
}