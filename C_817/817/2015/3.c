#include <stdio.h>

int main()
{
    int convert(int n);
    int n;
    scanf("%d", &n);
    printf("%d! = %d", n, convert(n));
}

int convert(int n)
{
    int x;
    if (n == 1)
    {
        x = 1;
    }else
    {
        x = n * convert(n-1);
    }
    return x;
    
    
}