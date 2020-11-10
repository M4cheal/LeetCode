#include <stdio.h>

void main()
{
    int i, j, temp, min, a[11] = {0, 5, 99, 505, 2, 5, 50, 60, 55, 8, 10};
    for ( i = 1; i <= 9; i++)
    {
        min = i;
        for ( j = i + 1; j <= 10; j++)
        {
            if (a[min] > a[j])
            {
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    for ( i = 1; i <= 10; i++)
    {
        printf("%d  ", a[i]);
    }
}