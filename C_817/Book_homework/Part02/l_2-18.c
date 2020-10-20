// 5！阶乘
#include <stdio.h>
void main()
{
    int i = 2, j = 1;
    while ( i <= 5)
    {
        j *= i;
        i++;
    }
    printf("%d", j);
    
}