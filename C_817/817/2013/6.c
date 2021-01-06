#include <stdio.h>

int a[5][5], b[5][5], c[5][5];
int i, j, k;
int main()
{
    void add(int a[5][5], int b[5][5]);
    void sub(int a[5][5], int b[5][5]);
    void mul(int a[5][5], int b[5][5]);
    printf("输入第一个5*5矩阵：\n");
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("输入第二个5*5矩阵：\n");
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d", &b[i][j]);
        }
        
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    add(a, b);
    printf("\n");
    sub(a, b);
    printf("\n");
    mul(a, b);
    printf("\n");
}

void add(int a[5][5], int b[5][5])
{
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
        
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    
}
void sub(int a[5][5], int b[5][5])
{
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            c[i][j] = a[i][j] - b[i][j];
        }
        
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}
void mul(int a[5][5], int b[5][5])
{
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            c[i][j] = 0;
            for ( k = 0; k < 5; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
        
    }

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}