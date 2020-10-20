#include <stdio.h>
#include <math.h>
void main()
{
    float a, x0, x1;
    printf("enter a positive num :");
    scanf("%f", &a);
    x0 = a; //可以为其他
    x1 = (x0 + a/x0)/2;
    do
    {
        x0 = x1;
        x1 = (x0 + a/x0)/2;
    } while (fabs(x0-x1) >= 1e-5);
    printf("%f,%f", a, x1);
}