#include <stdio.h>

int main()
{
    int n, j, sum=0;
    scanf("%d", &n);
    for ( j = 1; j < n; j++)
    {
        if (n%j == 0)
        {
            sum += j;
        }
        
    }
    if (sum == n)
    {
        printf("%d 是完数", n);
    }else
    {
        printf("%d 不是完数", n);
    }
    
    
    
}