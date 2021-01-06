#include <stdio.h>

int main()
{
    int i, j;
    char s[10], t;
    for ( i = 0; i < 10; i++)
    {
        scanf("%c", &s[i]);
    }
    for ( i = 0; i < 9; i++)
    {
        for ( j = 0; j < 9-i; j++)
        {
            if (s[j] > s[j + 1])
            {
                t = s[j];
                s[j] = s[j+1];
                s[j+1] = t;
            }
            
        }
        
    }
    for ( i = 0; i < 10; i++)
    {
        putchar(s[i]);
    }
    
    
    
}