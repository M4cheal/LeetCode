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
    printf("������,����0�˳���");
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

struct List *WuSort(struct List *L)//������������
{
	struct List *p, *tail, *next;
	int temp;
	if(L->next->next==NULL)//�ж��ǲ���һ���ڵ�����
		return L;
    tail=NULL;
    while(tail!=L->next->next)//tailӦ��ָ��������һ���ڵ�
    {
        for(p=L->next;p->next!=tail;p=p->next)//ע�⣺������p->next!=tail������p->next!=null
        {
            next=p->next;//p��next��ǰ��ڵ�Ĺ�ϵ
            if(p->data > next->data)//���ڽڵ�Ƚϣ����ݽ���
            {
                temp=p->data;
                p->data=next->data;
                next->data=temp;
            }
        }
        tail=p;// p->next==tail ��tial��ǰ�ƶ�һλ
    }
    return L;
}

void  Merge(struct List *list1, struct List *list2)  { 
/*����������list2�ϲ�����������list1�У���ʹlist1��Ȼ����*/
	list1=WuSort(list1);
	list2=WuSort(list2);

    struct List *p, *q, *r, *last;
    p = list1->next;   /*pʼ��ָ�򼯺�1�ĵ�һ��Ԫ��*/
    q = list2->next;   /*qʼ��ָ�򼯺�2�ĵ�һ��Ԫ��*/
    last = list1;        /*��list1������Ŀ�꼯�ϣ����Ӽ���1�����룬����lastʼ��ָ���β*/
    last->next = NULL;
    while(p && q) {    /*������1�ͼ���2������ʱ*/
        if(p->data < q->data) {   /*ȡ�������и��Եĵ�һ��Ԫ�ؽ��бȽϣ�ȡ����С��*/
            r = p;
            p = p->next;
        }
        else {
            r = q;
            q = q->next;
        }
        /*����С�ߴ���Ӧ���������벢���뵽Ŀ�꼯��list1��ĩβ����ʹ֮��Ϊ�µ�last*/
        r->next = last->next;
        last->next = r;
        last = r;
    }
    /*��δ�ռ�����ʣ��Ԫ�ض����ӵ�Ŀ�꼯��list1��last�ĺ���*/
    if(p)   last->next = p;    
    else  last->next = q;
    list2->next = NULL;  /*���ڵ�list2Ϊ�ռ��ˣ�������Ϊ�˱���list2��nextָ������*/
}

