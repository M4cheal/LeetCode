#include <stdio.h>
#include <stdlib.h>
#define N 8
typedef struct list
{
    int data;
    struct list *next;
}SLIST;

void fun(SLIST *h, int x)
{
    SLIST *p, *q, *s;
    s = (SLIST *)malloc(sizeof(SLIST));
    s->data = x;
    q = h;
    p = h->next;
    while (p != NULL && x > p->data)
    {
        q = q->next;
        p = p->next;
    }
    s->next = p;
    q->next = s;
}

SLIST *creatlist(int *a)
{
    SLIST *h, *p, *q;
    int i;
    h = p = (SLIST *)malloc(sizeof(SLIST));
    for ( i = 0; i < N; i++)
    {
        q = (SLIST *)malloc(sizeof(SLIST));
        q->data = a[i];
        p->next = q;
        p = q;
    }
    p->next = NULL;
    return h;
    
}

void outlist(SLIST *h)
{
    SLIST *p;
    p = h->next;
    if (p == NULL)
    {
        printf("\nThe list is NULL!\n");
    }else
    {
        printf("\nHead");
        do
        {
            printf("->%d", p->data);
            p = p->next;
        } while (p != NULL);
        printf("->NULL");
        printf("->End\n");
        
    }
    
    
}

int main()
{
    SLIST *head;
    int x;
    int a[N] = {11, 12, 15, 18, 19, 22, 25, 29};
    head = creatlist(a);
    printf("\nThe list before inserting:\n");
    outlist(head);
    printf("\nEnter a number:");
    scanf("%d", &x);
    fun(head, x);
    printf("\nThe list after inserting:\n");
    outlist(head);
}