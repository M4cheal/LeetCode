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
    printf("大写：%d\n小写：%d\n数字：%d\n其他：%d\n", daxie, xiaoxie, num, other);


}