#include <stdio.h>

int main()
{
    int i, sum = 0, y, m, d;
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("请输入年月日：\n");
    scanf("%d%d%d", &y, &m, &d);
    if (y>1970)
    {
        for ( i = 1970; i < y; i++)
        {
            if (i%4==0 && i%100 != 0 || i%400==0)
            {
                sum += 366;
            }else
            {
                sum += 365;
            }
        }
        for ( i = 0; i < m - 1; i++)
        {
            sum += a[i];
        }
        sum += d;
    }
    if (y==1970)
    {
        for ( i = 0; i < m - 1; i++)
        {
            sum += a[i];
        }
        sum += d;
        if ((1970%4==0 && 1970%100!=0 || 1970%400==0) && (m>=3))
        {
            sum += 1;
        }      
    }
    if (y < 1970)
    {
        for ( i = y + 1; i < 1970; i++)
        {
            if (i%4==0 && i%100!=0 || i%400==0)
            {
                sum += 366;
            }else
            {
                sum += 365;
            }
        }
        for ( i = m; i < 12; i++)
        {
            sum += a[i];
        }
        sum = sum + a[m-1] - d;
    }
    printf("距离1970年1月1日还有%d天", sum);
}