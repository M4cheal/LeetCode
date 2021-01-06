#include <stdio.h>

int main()
{
    int year, month, day;
    int fun(int y, int m, int d);

    scanf("%d,%d,%d", &year, &month, &day);
    printf("%d年%d月%d日 是%d年的第 %d 天 ",year, month, day, year, fun(year, month, day));
}
int fun(int y, int m, int d)
{
    int days = 0, i, a[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    for ( i = 0; i < m - 1; i++)
    {
        days += a[i];
    }
    days += d;
    if ((y%4 == 0 && y%100 != 0 || y%400 == 0) && (m > 2))
    {
        days += 1;
    }
    
    return days; 
}