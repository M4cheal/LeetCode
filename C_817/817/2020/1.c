#include <stdio.h>
#include <math.h>
int main()
{
    int n, m, i, j, s;
    scanf("%d%d", &n, &m);

    for ( i = n; i <= m; i++)
    {
        s = sqrt(i);
        for ( j = 2; j <= s; j++)
        {
            if (i%j == 0)
            {
                break;
            }
            
        }
        if (j > s)
        {
            printf("%d\t", i);
        }
        
    }
    

}