#include <stdio.h>

int main()
{
    int a, b, t;
    printf("Please enter two numbers:");
    scanf("%d%d", &a, &b);
    printf("\n%d,%d\n", a%b,b%a);
    while (b != 0)
    {
        t = a%b;
        a = b;
        b = t;
    }
    printf("%d", a);
    
}