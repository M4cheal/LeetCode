#include <stdio.h>
#include <math.h>
void main()
{
    double r, h, c, s, S, v, V;
    const double PI = 3.1415926;
    printf("?????????????\n");
    scanf("%lf%lf", &r, &h);
    printf("%lf,%lf", r, h);
    c = 2*PI*r;
    s = PI*r*r;
    S = 4*PI*r*r;
    v = (4.0/3.0)*(PI*r*r*r);
    V = PI*r*r*h;
    printf("?????%.2f,?????%.2f,???????%.2f,???????%.2f,????????%.2f", c, s, S, v, V);
}