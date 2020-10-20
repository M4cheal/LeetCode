#include <stdio.h>

void main()
{
    char c;
    int letters=0, space=0, digit=0, other=0;
    while ((c = getchar()) != '\n')
    {
        if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        {
            letters ++;
        }else if(c == ' ')
        {
            space++;
        }else if (c >= '0' && c <= '9')
        {
            digit++;
        }else
        {
            other++;
        }
    }
    printf("letters=%d, space=%d, digit=%d, other=%d", letters, space, digit, other);
}