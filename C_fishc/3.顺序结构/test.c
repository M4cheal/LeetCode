// #include <stdio.h>

// void main()
// {
//     char c;
//     printf("input a char acter \n");
//     c = getchar();
//     putchar('\n');
//     putchar(c);
// }

// #include <stdio.h>

// void main()
// {
//     int a, b, c;
//     printf("input a, b, c\n");
//     scanf("%d %d %d", &a, &b, &c);
//     printf("a=%d, b=%d, c=%d", a, b, c);

// }

// #include <stdio.h>
// void main()
// {
//     char a, b;
//     scanf("%c,%c", &a, &b);
//     printf("%c%c", a, b);
// }

#include <stdio.h>
#include <math.h>

void main()
{
    double a, b, c, disc, x1, x2, p, q;
    scanf("%lf,%lf,%lf", &a, &b, &c);
    disc = b*b - 4*a*c;
    p = -b / (2*a);
    q = sqrt(disc) / (2*a);
    x1 = p+q;
    x2 = p-q;
    printf("\nx1=%5.2f \nx2=%5.2f\n", x1, x2);
}