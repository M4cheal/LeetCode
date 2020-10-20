#include <stdio.h>
#include <math.h>

void main()
{
    double d, p, r, m;
    d = 300000;
    p = 6000;
    r = 0.01;
    m = log10(p/(p-d*r))/log10(1+r);
    printf("%.1f", m);
}