#include <stdio.h>
#define N 20

int main()
{
    int a[N], i, j, t, k, p;
    for ( i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    for ( i = 1; i < N; i++)
    {
        t = a[i];
        p = i - 1;
        while ( p >= 0 && a[p] > t)
        {
            a[p + 1] = a[p];
            p--;
        }
        a[p+1] = t;
        
    }
    for ( i = 0; i < N; i++)
    {
        printf("%d, ", a[i]);
    }
    
    
    
}