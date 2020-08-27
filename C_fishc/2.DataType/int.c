// #include <stdio.h>

// #define PRICE 30

// void main()
// {
//     int num, total;
//     num = 10;
//     total  = num * PRICE;
//     printf("total = %d\n", sizeof(float));
// }

// #include <stdio.h>

// void main()
// {
//     int a, b, c, d;
//     unsigned u;
//     a = 12;
//     b = -24;
//     u = 10;
//     c = a + u;
//     d = b + u;
//     printf("a + u = %d, d + u = %d \n", c, d);
// }


/**
 * 整型溢出
*/
#include <stdio.h>

void main()
{
     int a, b;
    a = 32767;
    b = a + 1;
    printf("%d, %d", a, b);
}