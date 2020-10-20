// 多项式 1 - 1/2 + 1/3 - 1/4 + ... + 1/99 - 1/100

#include <stdio.h>
void main()
{
    int sign = 1; //正负号
    double sum = 1.0, deno = 2.0;// deno 为底数
    while ( deno <= 100)
    {
        sign = -sign;
        sum = sum + sign/deno;
        deno++;
    }
    printf("%d", sum);
    
}