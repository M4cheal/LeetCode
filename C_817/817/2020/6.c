#include <stdio.h>
#define N 10
int main()
{
    int a[N][N], n, i, j, t, max, maxj;
    printf("输入数组维度:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
        
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for ( i = 0; i < n; i++)
    {
        max = a[i][0];
        maxj = 0;
        for ( j = 1; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                maxj = j;
            }
            
        }
        t = a[i][maxj];
        a[i][maxj] = a[i][0];
        a[i][0] = t;
        
    }
    printf("\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    
    

}