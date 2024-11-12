#include <stdio.h>
#include <stdarg.h>

int sum_help(va_list as, int n)
{
    int sum = 0;
    int i = 0;
    while (i < n)
    {
        sum += va_arg(as, int);
        printf("gp_offset : %d\n", (int)as[0].gp_offset);
        printf("fp_offset : %d\n", (int)as[0].fp_offset);
        printf("overflow_arg_area : %p\n", as[0].overflow_arg_area);
        printf("value  at overflow_arg_area : %d\n", *(int *)as[0].overflow_arg_area);
        printf("reg_save_area : %p\n", as[0].reg_save_area);
        printf("value at reg_save_area : %d\n", *(int *)as[0].reg_save_area);
        printf("-------------------------------------------------\n");
        i++;
    }
    return sum;
}

int sum(int a, ...)
{
    va_list as;
    va_start(as, a);
    printf("gp_offset : %d\n", (int)as[0].gp_offset);
    printf("fp_offset : %d\n", (int)as[0].fp_offset);
    printf("overflow_arg_area : %p\n", as[0].overflow_arg_area);
    printf("value  at overflow_arg_area : %d\n", *(int *)as[0].overflow_arg_area);
    printf("reg_save_area : %p\n", as[0].reg_save_area);
    printf("value at reg_save_area : %d\n", *(int *)as[0].reg_save_area);
    printf("-------------------------------------------------\n");
    int sum = sum_help(as, a);
    va_end(as);
    return sum;
}

int main(void)
{
    printf("%d\n", sum(9, 2, 3, 300, 5, 6, 7, 8, 9, 10));
    return 0;
}