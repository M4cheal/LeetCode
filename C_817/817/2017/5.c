#include <stdio.h>

int main()
{
    int fun(int y, int m, int d);
    int year, month, day;
    printf("输入年月日：\n");
    scanf("%d%d%d", &year, &month, &day);
    printf("%d年%d月%d日 是当年的第%d天", year, month, day, fun(year, month, day));
}

int fun(int y, int m, int d)
{
    int a[12] = {31, 28, 31, 30, 31,30, 31,31, 30, 31, 30, 31};
    int sum = 0, i;
    for ( i = 0; i < m-1; i++)
    {
        sum += a[i];
    }
    sum += d;

    if ((y%4 == 0 && y%100 != 0 || y%400==0) && m>2)
    {
        sum+=1;
    }
    return sum;
    
}