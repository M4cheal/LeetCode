#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char s[100], ch;
    FILE *fp;
    int i = 0;
    if ((fp=fopen("test.dat","w")) == NULL)
    {
        printf("cannot open the file");
        exit(0);
    }
    while ((ch = getchar())!= '!')
    {
        s[i] = ch;
        i++;
    }
    s[i] = '\0';
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] >='A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        fputc(s[i], fp);
        i++;
    }
    fclose(fp);
    fp=fopen("test.dat","r");
	fgets(s, strlen(s)+1, fp);
	printf("%s",s);
	fclose(fp);

    
    
}