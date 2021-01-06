#include <stdio.h>
#define N 5
int main()
{
    int a[N], i, j, t;

    for ( i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    for ( i = 0; i < N-1; i++)
    {
        for ( j = 0; j < N-1-i; j++)
        {
            if (a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
            
        }
        
    }
    for ( i = 0; i < N; i++)
    {
        printf("%d\t", a[i]);
    }
    
    
}