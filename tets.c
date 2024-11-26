/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tets.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenomar <mbenomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:43:17 by mbenomar          #+#    #+#             */
/*   Updated: 2024/11/26 15:43:20 by mbenomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	sum_help(va_list as, int n)
{
	int	sum;
	int	i;

	sum = 0;
	i = 0;
	while (i < n)
	{
		sum += va_arg(as, int);
		printf("gp_offset : %d\n", (int)as[0].gp_offset);
		printf("fp_offset : %d\n", (int)as[0].fp_offset);
		printf("overflow_arg_area : %p\n", as[0].overflow_arg_area);
		printf("value  at overflow_arg_area : %d\n",
			*(int *)as[0].overflow_arg_area);
		printf("reg_save_area : %p\n", as[0].reg_save_area);
		printf("value at reg_save_area : %d\n", *(int *)as[0].reg_save_area);
		printf("-------------------------------------------------\n");
		i++;
	}
	return (sum);
}

// static int ft_issep(char c)
// {
//     int i;

//     i = 0;
//     while (PRINTF_SPECIFIERS[i])
//     {
//         if (PRINTF_SPECIFIERS[i] == c)
//             return (1);
//         i++;
//     }
//     return (0);
// }

int	sum(int a, ...)
{
	va_list	as;
	int		sum;

	va_start(as, a);
	printf("gp_offset : %d\n", (int)as[0].gp_offset);
	printf("fp_offset : %d\n", (int)as[0].fp_offset);
	printf("overflow_arg_area : %p\n", as[0].overflow_arg_area);
	printf("value  at overflow_arg_area : %d\n",
		*(int *)as[0].overflow_arg_area);
	printf("reg_save_area : %p\n", as[0].reg_save_area);
	printf("value at reg_save_area : %d\n", *(int *)as[0].reg_save_area);
	printf("-------------------------------------------------\n");
	sum = sum_help(as, a);
	va_end(as);
	return (sum);
}

int	main(void)
{
	printf("%d\n", sum(9, 2, 3, 300, 5, 6, 7, 8, 9, 10));
	return (0);
}
