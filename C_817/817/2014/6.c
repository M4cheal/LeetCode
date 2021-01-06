#include <stdio.h>
#include <stdlib.h>

struct node
{
    int name;
    struct node *next;
};
int main()
{
    int n, m;
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *p, *q;
    int counts = 1;
    int i;
    printf("This is a YES(n, m) problem. \n");
    printf("please input the integer n(n>=1) \n");
    scanf("%d", &n);
    printf("please input the integer m(m>=1) \n");
    scanf("%d", &m);

    p = head;
    head->name = 1;
    for ( i = 2; i <= n; i++)
    {
        p->next = (struct node*)malloc(sizeof(struct node));
        p = p->next;
        p->name = i;
    }
    p->next = head;

    q = p;
    p = head;

    while (p != p->next)
    {
        for ( counts = 1; counts < m; counts++)
        {
            p = p->next;
            q = q->next;
        }
        printf("Get rid of: %d\n", p->name);
        q->next = p->next;
        p = p->next;
    }
    printf("The left element is: %d\n", p->name);
}