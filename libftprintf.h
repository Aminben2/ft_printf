/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:31:36 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/12 13:56:58 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>

# define HEXA "0123456789abcdef"
# define HEXA_CAP "0123456789ABCDEF"
# define PRINTF_SPECIFIERS "cspdiuxX%"

int ft_printf(const char *str, ...);
int ft_putchar(char c);

#endif