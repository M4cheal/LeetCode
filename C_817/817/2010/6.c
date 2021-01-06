#include <stdio.h>

struct Day
{
    int year;
    int month;
    int day;
}s;
int main()
{
    int days(int y, int m, int d);
    int sum;
    printf("请输入年月日:\n");
    scanf("%d%d%d", &s.year, &s.month, &s.day);
    sum = days(s.year, s.month, s.day);
    printf("%d年%d月%d日 是第 %d 天", s.year, s.month, s.day, sum);
}

int days(int y, int m, int d)
{
    int a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, s=0;
    for ( i = 0; i < m-1; i++)
    {
        s += a[i];
    }
    s += d;
    if ( ( y%4==0 && y%100!=0 || y%400==0 ) && (m>2) )
    {
        s += 1;
    }
    return s;
}