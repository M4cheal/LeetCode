#include <stdio.h>

int main()
{
    int yueshu(int a,int b);
    int a, b, t, k;
    printf("Please enter two numbers:");
    scanf("%d%d",&a, &b);
    t = yueshu(a, b);
    printf("���Լ��=%d", t);
    k = a*b/t;
    printf("��С������=%d", k);
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