#include <stdio.h>
#include <math.h>
int sushu(int n)
{
    int s, i;
    s = (int)sqrt(n);

    for ( i = 2; i <= s; i++) //加等号
    {
        if (n%i == 0)
        {
            return 0;
        }
        
        
    }
    return 1;
}

int main()
{
    int i;
    for ( i = 100; i <= 200; i++)
    {
        if (sushu(i))
        {
            printf("%d\t", i);
        }
    }
    
}