#include <stdio.h>
#include <math.h>

void main()
{
    int i, j, k;
    int a[101];
    for ( i = 1; i <= 100; i++)
    {
        a[i] = i;
    }
    a[1] = 0;
    
    for ( i = 2; i < sqrt(100); i++)
    {
        for ( j = i + 1; j <= 100; j++)
        {
            if (a[i] != 0 && a[j] != 0)
            {
                if (a[j]%a[i] == 0)
                {
                    a[j] = 0;
                }
            }
        }
        
        
    }
    printf("\n");
        for ( i = 2, k = 0; i <= 100; i++)
        {
            if (a[i] != 0)
            {
                printf("%5d", a[i]);
                k++;
            }
            if (k%10 == 0)
            {
                printf("\n");
            }
            
            
        }
    
}