#include <stdio.h>
void main()
{
    char c1, c2, c3, c4, c5;
    c1 = 'C';
    c2 = 'h';
    c3 = 'i';
    c4 = 'n';
    c5 = 'a';
    c1 += 4;
    c2 += 4;
    c3 += 4;
    c4 += 4;
    c5 += 4;
    putchar(c1);
    putchar(c2);
    putchar(c3);
    putchar(c4);
    putchar(c5);
    putchar('\n');
    printf("%c%C%C%C%C", c1, c2, c3, c4, c5);
}