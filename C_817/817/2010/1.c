#include <stdio.h>

int main()
{
    char c;
    int letter=0, space=0, num=0, other=0;
    while ((c=getchar()) != '\n')
    {
        if (c >= 'a' && c<= 'z' || c >= 'A' && c <= 'Z')
        {
            letter++;
        }else if (c == ' ')
        {
            space++;
        }else if (c >= '0' && c <= '9')
        {
            num++;
        }else
        {
            other++;
        }
    }
    printf("%d,%d,%d,%d",letter, space, num, other);
}