#include <stdio.h>
#include <math.h>
#include <stdbool.h>
void main()
{
    double a, b, c;
    double disc, p, q;
    scanf("%lf%lf%lf", &a, &b, &c);
    disc = b*b - 4*a*c;
    if (disc < 0)
    {
        printf("��ʵ��");
    }else
    {
        p = -b/(2*a);
        q = sqrt(disc)/(2*a);
        printf("x1 = %lf, x2 = %lf", p+q, p-q);
    }
}