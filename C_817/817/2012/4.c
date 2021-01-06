#include <stdio.h>
#include <string.h>
#define M 5
void Swap(char s[M][128])
{
    char tmp[128] = {0};
    int i, j;
    for ( i = 0; i < M-1; i++)
    {
        for ( j = 0; j < M-1-i; j++)
        {
            if (strcmp(s[j], s[j+1]) > 0)
            {
                strcpy(tmp, s[j]);
                strcpy(s[j], s[j + 1]);
                strcpy(s[j + 1], tmp);
            }
            
        }
        
    }
    
}
int main()
{
    char s[M][128];
    int result[M+1]={0};
    int i, j, k = 1;
    for ( i = 0; i < M; i++)
    {
        gets(s[i]);
    }
    Swap(s);
    for ( i = 0; i < M; i++)
    {
        for ( j = i+1; j < M; j++)
        {
            if (strcmp(s[i], s[j]) == 0)
            {
                k++;
                i = j;
            }
            
        }
        result[k]++;
        k = 1;
        
    }
    for ( i = 1; i <= M; i++)
    {
        printf("%d   %d\n", i, result[i]);
    }
}