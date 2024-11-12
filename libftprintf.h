/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:31:36 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/12 23:03:48 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <limits.h>

int ft_printf(const char *str, ...);
int ft_putchar(int c);
int ft_put_signed_integer(int nb);
int ft_put_unsigned_integer(unsigned int nb);
int ft_putstr(char *str);
int ft_puthexa(unsigned int address);
int ft_puthexaup(unsigned int address);
int ft_putaddress(unsigned long address);


#endif