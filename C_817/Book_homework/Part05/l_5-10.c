#include <stdio.h>
#include <math.h>

void main()
{
    int n, i, k, m;
    for (n = 101; n <= 200; n += 2)
    {
        k = sqrt(n);
        for (i = 2; i <= k; i++)
        {
            if (n%i == 0)
            {
                break;
            }
        }
        if (i > k)
        {
            printf("%d ", n);
            m+=1;
        }
        if (m%10 == 0)
        {
            printf("\n");
        }
        
    }
    
}