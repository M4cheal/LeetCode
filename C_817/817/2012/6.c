#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10

struct part
{
    char str[LEN + 1];
    struct part *next;
};

struct part *first = NULL;
int add_list(void);
void print(void);
int read_line(char str[],int n);

int main(void)
{
    for (;;)
    {
        if (add_list())
        {
            break;
        }
        
    }
    
}

int add_list(void)
{
    int rline;
    struct part *p, *prev, *cur;
    p = malloc(sizeof(struct part));
    if (p == NULL)
    {
        printf("No Room Exist!\n");
        return 0;
    }
    printf("Enter word:");
    rline = read_line(p->str, LEN);//如果只输入一个'\n',则结束读取，输出结果，结束程序。

    if (rline == 0)
    {
        print();
        return 1;
    }
    for ( prev = NULL, cur=first; 
        cur != NULL && (strcmp((p->str), (cur->str)) < 0);
        prev = cur, cur = cur->next){}

    if (prev == NULL)
    {
        p->next = first;
        first = p;
    }else
    {
        prev->next = p;
        p->next = cur;
    }
    
    return 0;
    
}

void print(void)
{
    struct part *pa;
    printf("In sorted order:");
    for ( pa = first; pa != NULL; pa = pa->next)
    {
        printf("%s  ", pa->str);
    }
    printf("\n");
}

int read_line(char str[],int n)//读取字符串
{
    int ch,i = 0;

    while ((ch = getchar())!= '\n')
    {
        if (i < n)
        {
            str[i] = ch;
            i++;
        }
    }

    str[i] = '\0';
    return i;
}
