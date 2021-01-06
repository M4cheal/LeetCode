#include <stdio.h>
#include <stdlib.h>

struct List
{
    int data;
    struct List * next;
};
int main()
{
    struct List *a, *b;
    struct List* creat();
    struct List* print(struct List* head);
    struct List *WuSort(struct List *L);
    void Merge(struct List *list1, struct List *list2);

    a = creat();
    b = creat();
    print(a);
    printf("------------");
    print(b);
    printf("------------");
    Merge(a, b);
    print(a);
}

struct List* creat()
{
    int i;
    struct List *p, *head, *p1;
    p = (struct List *)malloc(sizeof(struct List));
    head = p;
    p1 = head;
    p1->next = NULL;
    printf("输入编号,输入0退出！");
    while (1)
    {
        p = (struct List *)malloc(sizeof(struct List));
        scanf("%d", &p->data);
        if (p->data == 0)
        {
            free(p);
            break;
        }
        p1->next = p;
        p->next = NULL;
        p1 = p1->next;
    }
    return head;
}
struct List* print(struct List* head)
{
    struct List *p;
    p = head->next;
    while (p!= NULL)
    {
        printf("%d\n", p->data);
        p = p->next;
    }    
}

struct List *WuSort(struct List *L)//无序链表排序
{
	struct List *p, *tail, *next;
	int temp;
	if(L->next->next==NULL)//判断是不是一个节点的情况
		return L;
    tail=NULL;
    while(tail!=L->next->next)//tail应给指向的是最后一个节点
    {
        for(p=L->next;p->next!=tail;p=p->next)//注意：这里是p->next!=tail而不是p->next!=null
        {
            next=p->next;//p和next是前后节点的关系
            if(p->data > next->data)//相邻节点比较，数据交换
            {
                temp=p->data;
                p->data=next->data;
                next->data=temp;
            }
        }
        tail=p;// p->next==tail 把tial往前移动一位
    }
    return L;
}

void  Merge(struct List *list1, struct List *list2)  { 
/*将有序单链表list2合并到有序单链表list1中，并使list1仍然有序*/
	list1=WuSort(list1);
	list2=WuSort(list2);

    struct List *p, *q, *r, *last;
    p = list1->next;   /*p始终指向集合1的第一个元素*/
    q = list2->next;   /*q始终指向集合2的第一个元素*/
    last = list1;        /*将list1看成是目标集合，并从集合1中脱离，并将last始终指向表尾*/
    last->next = NULL;
    while(p && q) {    /*当集合1和集合2都不空时*/
        if(p->data < q->data) {   /*取两集合中各自的第一个元素进行比较，取其中小者*/
            r = p;
            p = p->next;
        }
        else {
            r = q;
            q = q->next;
        }
        /*将较小者从相应集合中脱离并插入到目标集合list1的末尾，并使之成为新的last*/
        r->next = last->next;
        last->next = r;
        last = r;
    }
    /*将未空集合中剩余元素都链接到目标集合list1的last的后面*/
    if(p)   last->next = p;    
    else  last->next = q;
    list2->next = NULL;  /*现在的list2为空集了，赋空是为了避免list2的next指针悬空*/
}

