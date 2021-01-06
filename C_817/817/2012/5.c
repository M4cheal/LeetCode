#include <stdio.h>

int Fibon(int n)
{
    if (n == 0)
    {
        return 0;
    }
    
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return Fibon(n-1) + Fibon(n-2);
    }
}

int sum(int n)
{
    int s;
    if (n == 0)
    {
        return 0;
    }
    else
    {
        s = Fibon(n) + sum(n - 1);
    }
    return s;
    
    
}
int main()
{
    int sum(int n);
    int Fibon(int n);
    int n, s, x;
    scanf("%d", &n);
    x = Fibon(n);
    s = sum(n);
    printf("第%d 项目 = %d，前%d项之和=%d", n, x, n, s);
}