#include <stdio.h>
#define N 9

int main()
{
    int i, j, a[N][N], b[N][N];
    printf("输入9*9矩阵：\n");
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("顺时针90度\n");
    for ( i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
        {
            b[i][j] = a[N-1-j][i];
            printf("%2d", b[i][j]);
        }
        
    }
    
    
}