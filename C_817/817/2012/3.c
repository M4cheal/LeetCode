#include <stdio.h>
#include <math.h>
#define N 10000
int main()
{
    int i, t, j, flag;
    for ( i = 1000; i < N; i++)
    {
        flag = 0;
        for ( j = 0; j < i; j++)
        {
            if (pow(j, 2) == i)
            {
                flag = 1;
            }
        }
        if ((flag == 1) && (i >= 1111))
        {
            t = i - 1111;
            for ( j = 0; j < t; j++)
            {
                if (pow(j, 2) == t)
                {
                    printf("%d", t);
                    break;
                }
                
            }
            
        }
        
        
    }
    
}