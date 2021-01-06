#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2, *fp;
    int i=0, j, n;
    char c[100], ch, t;

    if ((fp1=fopen("E:\\MyNote\\LeetCode\\C_817\\817\\2019\\A", "r")) == NULL)
    {
        printf("cannot open the A");
        exit(0);
    }
    if ((fp2=fopen("E:\\MyNote\\LeetCode\\C_817\\817\\2019\\B", "r")) == NULL)
    {
        printf("cannot open the B");
        exit(0);
    }
    printf("file A:\n");
    for ( i = 0; (ch=fgetc(fp1))!=EOF; i++)
    {
        c[i] = ch;
        putchar(c[i]);
    }
    printf("\nfile B:\n");
    for ( j = i; (ch=fgetc(fp2))!=EOF; j++)
    {
        c[j] = ch;
        putchar(c[j]);
    }
    fclose(fp1);
    fclose(fp2);
    n = j;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            if (c[j] > c[j+1])
            {
                t = c[j];
                c[j] = c[j+1];
                c[j+1] = t;
            }
            
        }
        
    }
    printf("\n file C: \n");
    fp = fopen("E:\\MyNote\\LeetCode\\C_817\\817\\2019\\C", "w");
    for ( i = 0; i < n; i++)
    {
        fputc(c[i], fp);
        putchar(c[i]);
    }
    fclose(fp);
    
}