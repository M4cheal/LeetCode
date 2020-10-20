#include <stdio.h>
#include <stdbool.h>
void main()
{
    bool leap;
    int year;
    scanf("%d", &year);
    if (year%4 == 0)
    {
        if (year%100 ==0)
        {
            if (year%400 == 0)
            {
                leap = true;
            }else
            {
                leap = false;
            }
            
            
        }else
        {
            leap = true;
        }
    }else
    {
        leap = false;
    }
    if (leap)
    {
        printf("%d is leap year", year);
    }else
    {
        printf("%d is not leap year", year);
    }
    
    
    
}