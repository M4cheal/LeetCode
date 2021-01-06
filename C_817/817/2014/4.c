#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, t;
    int a[5][5], b[5][5] = {0};

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
           for ( t = 0; t < 5; t++)
           {
               b[i][j] += a[i][t]*a[t][j];
           }
            
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
printf("\n");
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    
    
    
}