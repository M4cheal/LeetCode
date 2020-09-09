#include <stdio.h>

void main()
{
    int n = 0;
    printf("input a string \n");
    while (getchar()!='\n')
    {
        n++;
    }
    printf("%d", n);
    
}

#include <conio.h> // getch和putch

// ESC ACSII码为27
// Enter ACSII码为13