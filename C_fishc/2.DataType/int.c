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
// #include <stdio.h>

// void main()
// {
//      int a, b;
//     a = 32767;
//     b = a + 1;
//     printf("%d, %d", a, b);
// }

/**
 * 字符型
*/
// #include <stdio.h>

// void main()
// {
//     float a, b;
//     a = 123456.789e5;
//     b = a + 20;
//     printf("%f \n", a);
//     printf("%f \n", b);
//     printf("%f \n", 1.0/3 * 3);
// }

// #include <stdio.h>
// void main()
// {
//     char a, b;
//     a = 'a';
//     b = 'b';
//     a = a - 32;
//     b = b - 32;
//     printf("%c, %c \n", a, b);
//     printf("%d, %d \n", a, b);
// }

// #include <stdio.h>
// void main()
// {
//     printf("7 / 2 = %d....%d\n", 7/2, 7%2);
// }


/**
 * 自增自减
 */
// #include <stdio.h>
// void main()
// {
//     int i = 5, j = 3,p, q;
//     p = (i++) + (i++) + (i++);

//     q = (++j) + (++j) + (++j);
//     printf("%d \n%d \n %d \n%d \n", p, q, i ,j);
// }

#include <stdio.h>
void main()
{
    char *a = "hello";
    printf("------ %s \n", a);
}