#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    // int size =  ft_put_unsigned_integer(NULL);
    // int size =  ft_put_signed_integer(INT_MAX);
    // int size = ft_puthexa(454510515);
    // int size1 = ft_puthexaup(454510515);

    // printf("--size = %d--\n",size);
    // printf("--size1 = %d--\n",size1);
    // int test = 5;
    // int i = ft_printf("amine %c %i %% %s %u %x %X %p\n",'a',4," amine",UINT_MAX,456465613,456465613,&test);
    // printf("bytes : %d\n",i);

    // int s = ft_printf("f : %p %p \n", LONG_MIN, LONG_MAX);
    // int s1 = printf("o : %p %p \n", LONG_MIN, LONG_MAX);
    int s = ft_printf("f : %p %p \n", 0,0 );
    int s1 = printf("o : %p %p \n", 0,0);
    // printf("size dyali : %d\n", s);
    // printf("size dyalom : %d", s1);
    return 0;
    //-2147483648
    // 4294967295
    // aminea4% amine4294967295
}