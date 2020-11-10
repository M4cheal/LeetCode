#include <stdio.h>

void main()
{
    int a[10] = {50, 100, 2, 9, 20, 66, 5, 686, 5, 10};
    int i, j, t;
    for ( i = 0; i < 9; i++)
    {
        for ( j = 0; j < 9-i; j++)
        {
            if (a[j] > a[j+1])
            {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    for ( i = 0; i < 10; i++)
    {
        printf("%d ,", a[i]);
    }
}