#include <stdio.h>
#include <stdlib.h>
#define len sizeof(struct List)

struct List{
    int x;
    struct List *next;
};

struct List * creat()
{
    struct List *head, *p1, *p2;
    int first = 1;
    p1 = (struct List *)malloc(len);
    while(1){
        scanf("%d", &p1->x);
        if(p1->x == -1)
        {
            break;
        }
        if (first)
        {
            head = p1;
        }else
        {
            p2->next = p1;
        }
        first = 0;
        p2 = p1;
        p1 = (struct List *)malloc(len);
    }
    p2->next = NULL;
    return head;
}
//�жϵ�b�����е�Ԫ���Ƿ������a������
int NotExit_a(int y,struct List *head)
{
	while(head != NULL)
	{
		//���������a������ֱ�ӷ���false
		if(head->x == y)
		return 0;
		head=head->next;
	}	
	//��������aδ�ҵ���ͬ��Ԫ�� ����true
	return 1;
}

int main()
{
    struct List *head_a, *head_b, *head_temp, *head, *head_temp1, *relea;
    printf("����������A��Ԫ�أ���-1Ϊ��������");
    head_temp = head_a = creat();
    printf("����������B��Ԫ�أ���-1Ϊ��������");
    head_temp1 = head_b = creat();
    //�ҵ�����A��βָ�룬���������������A
    while(head_temp != NULL)
    {
        head = head_temp;
        head_temp = head_temp->next;
    }
    while(head_b != NULL)
    {
        printf("--%d--", head_b);
        if (NotExit_a(head_b->x, head_a))
        {
            head_temp = (struct List *)malloc(len);
            head_temp->x = head_b->x;
            head_temp->next = NULL;
            head->next = head_temp;
            head = head_temp;
            
        }
        head_b = head_b->next;
    }
    //�ͷ�����B�Ŀռ�
    while(head_temp1 != NULL)
    {
        printf("**%d**", head_temp1);
        relea = head_temp1->next;
        free(head_temp1);
        head_temp1 = relea;
    }
    ////////////////////////////////////////////////free(relea);
    //free(relea),free(head_temp1);
    printf("����A��B�Ĳ���Ϊ:");
    while(head_a != NULL)
    {
        printf("%d", head_a->x);
        head_a = head_a->next;
    }
    printf("\n");
    return 0;

}