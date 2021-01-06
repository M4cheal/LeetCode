#include <stdio.h>

int main()
{
    int yueshu(int a,int b);
    int a, b, t, k;
    printf("Please enter two numbers:");
    scanf("%d%d",&a, &b);
    t = yueshu(a, b);
    printf("最大公约数=%d", t);
    k = a*b/t;
    printf("最小公倍数=%d", k);
}

int yueshu(int a,int b)
{
    if (a%b == 0)
    {
        return b;
    }
    else
    {
        return yueshu(b, a%b);
    }
    
    
}