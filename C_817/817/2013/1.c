#include <stdio.h>

int main()
{
    int daxie = 0, xiaoxie = 0, num = 0, other = 0;
    char s[100];
    char *p;
    gets(s);
    p = s;

    while(*p != '\0')
    {
        if (*p >= '0' && *p <= '9')
        {
            num++;
        }else if (*p >= 'a' && *p <= 'z')
        {
            xiaoxie++;
        }else if (*p >= 'A' && *p <= 'Z')
        {
            daxie++;
        }else
        {
            other++;
        }
        p++;
    
    }
    printf("��д��%d\nСд��%d\n���֣�%d\n������%d\n", daxie, xiaoxie, num, other);


}