#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2, s, m;

    printf("input a, b, c:");
    scanf("%d%d%d", &a, &b, &c);

    s = b*b - 4*a*c;
    m = -b/(2.0*a);
    if (s == 0)
    {
        x1 = x2 = m;
        printf("x1 = %0.3f. x2 = %0.3f", x1, x2);
    }else if (s > 0)
    {
        x1 = m + sqrt(s)/(2.0*a);
        x2 = m - sqrt(s)/(2.0*a);
        printf("x1 = %0.3f. x2 = %0.3f", x1, x2);
        
    }else
    {
        s = -s;
        printf("x1 = %0.3f + %0.3fi. x3 = %0.3f - %0.3fi", m, sqrt(s)/(2.0*a), m, sqrt(s)/(2.0*a));
    }
    
    
    
}