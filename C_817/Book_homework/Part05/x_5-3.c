#include <stdio.h>

void main()
{
    int a, b, m, n, temp, p, r;
    printf("input two num :");
    scanf("%d%d", &n ,&m);
    if (n < m)
    {
        temp = n;
        n = m;
        m = temp;
    }
    p = m*n; //最大公约数 * 最小公倍数 = 两个数成绩
    //最大公约数
    while (m != 0)
    {
        r = n%m;
        n = m;
        m = r;
    }
    printf("%d,%d", n, p/n);

    
}