#include <stdio.h>
#include <math.h>

int main()
{
    double r = 0.1, p;
    int n=10;
    p = pow(1+r, n);
    printf("%f", p);
    return 0;
}