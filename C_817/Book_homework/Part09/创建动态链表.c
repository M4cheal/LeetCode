//单项动态链表

#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(struct Student)

struct Student
{
    long num;
    float score;
    struct Student *next;
};

int n ;

struct Student * creat()
{
    struct Student *p1, *p2, *head;
    n = 0;
    p1 = p2 = (struct Student*) malloc(LEN);
    scanf("%ld,%f", &p1->num, &p1->score);
    head = NULL;
    while (p1->num != 0)
    {
        n += 1;
        if(n == 1) head = p1;
        else p2->next = p1;
        p2 = p1;
        p1 = (struct Student *) malloc(LEN);
        scanf("%ld,%f", &p1->num, &p1->score);
    }
    p2->next = NULL;
    return(head);
}

void print(struct Student *head)
{
    struct Student *p;
    p = head;
    printf("\nn = %d\n",n);
    do
    {
        printf("\nnum:%ld\nscore:%5.1f\n", p->num,p->score);
        p = p->next;
    } while (p != NULL);
    
}

struct Student *del(struct Student *head, long num){
    struct Student *p1, *p2;
    if (head == NULL)
    {
        printf("\n list null \n");   //空表
        return (head);
    }
    p1 = head;                      //将p1指向第1个结点
    while (num != p1->num && p1->next != NULL)  //p1指向的不是要找的结点，并且后面有结点
    {
        p2 = p1;
        p1 = p1->next;
    }
    if(num == p1->num)
    {
        if (p1 == head)
        {
            head = p1->next;
        }else
        {
            p2->next = p1->next;
        }
        printf("delect:%ld\n", num);
        n -= 1;
    }else{
        printf("%ld not been found!\n", num);
    }
    return(head);
}

struct Student *insert(struct Student *head, struct Student *stud){
    struct Student *p0, *p1, *p2;
    p1 = head;
    p0 = stud;
    if (head == NULL)
    {
        head = p0;
        p0->next = NULL;
    }
    else
    {
        while ((p0->num > p1->num) && (p1->next != NULL))
        {
            p2 = p1;
            p1 = p1->next;
        }
        if (p0->num <= p1->num)
        {
            if (head == p1)
            {
                head = p0;
            }
            else
            {
                p2->next = p0;
            }
            p0->next = p1;
        }
        else
        {
            p1->next = p0;
            p0->next = NULL;
        }
    }
    n += 1;
    return(head);
}

int main()
{
    struct Student * creat();
    struct Student * del(struct Student *, long);
    struct Student * insert(struct Student *, struct Student *);
    void print(struct Student *);
    struct Student *head, *stud;
    long del_num;
    printf("input records:\n");
    head = creat();
    print(head);
    printf("input the deleted number:");
    scanf("%ld", &del_num);
    head = del(head, del_num);
    print(head);
    printf("input the inserted record:");
    scanf("%ld,%f", &stud->num, &stud->score);
    head = insert(head, stud);
    print(head);
    return 0;
}