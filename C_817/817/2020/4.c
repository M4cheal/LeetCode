#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i, y1, y2, m1, m2, d1, d2, sum = 0;

    printf("输入第一个日期:\n");
    scanf("%d%d%d", &y1, &m1, &d1);
    printf("输入第二个日期:\n");
    scanf("%d%d%d", &y2, &m2, &d2);
    if (y1 != y2)
    {
        printf("请输入同一年!");
        exit(0);
    }
    if (m1 > m2)
    {
        swap(&m1, &m2);
        swap(&d1, &d2);
    }
    
    
    
    for ( i = m1+1; i < m2; i++)
    {
        sum += a[i];
    }
    
    if (m1 != m2)
    {
        sum += d2;
        sum += a[m1] - d1;
    }else if (m1 == m2 && d2 < d1)
    {
        sum += d1 - d2;
    }
    else
    {
        sum += d2 - d1;
    }
    
    if ((y1%4==0&&y1%100!=0 || y1%400==0) && (m2 > 2 && m1 <= 2))
    {
        sum += 1;
    }
    printf("相差%d天", sum);
}
