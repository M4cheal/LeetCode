#include <stdio.h>

int main()
{
    int i, j, sum, t;

    for ( i = 1; i < 1000; i++)
    {
        sum = 0;
        for ( j = 1; j < i; j++)
        {
            if (i%j == 0)
            {
                sum += j;
            }
            
        }

        if (i == sum)
        {
            printf("%d,其因子是：", i);
            for ( t = 1; t < i; t++)
            {
                if (i%t == 0)
                {
                    printf("%d\t",t);
                }
                
            }
            printf("\n");
            
        }
        
        
    }
    
}