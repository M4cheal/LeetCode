#include <stdio.h>
#define m 3
#define n 4
int main()
{
    int a[m][n];
    int i, j, max, c=0, b=0;
    printf("请输入一个%d*%d阶的矩阵", m, n);
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }

    max = a[0][0];
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
                b = i;
                c = j;
            }
            
        }
        
    }
    
    printf("最大数是%d，其坐标是第%d行，%d列", max, b, c);
}
