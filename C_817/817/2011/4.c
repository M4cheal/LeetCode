#include <stdio.h>
#define M 3
#define N 4

int main()
{
    int a[M][N];
    int max, i, j, c, b;

    printf("����һ��%d * %d�׵ľ���", M, N);
    for ( i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0];
    for ( i = 0; i < M; i++)
    {
        for ( j = 0; j < N; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                b = i;
                c = j;
            }
        }
        
    }
    printf("�������a[%d][%d] = %d", b, c, max);
    
}