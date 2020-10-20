#include <stdio.h>

void main()
{
    int f1, f2, f3;
    f1 = 1;
    f2 = 1;
    printf("%d\n%d\n", f1, f2);
    for (int i = 0; i < 38; i++)
    {
        f3 = f2 + f1;
        printf("%d\n", f3);
        f1 = f2;
        f2 = f3;
    }
    
}