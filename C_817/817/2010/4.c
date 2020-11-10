#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student {
	int id;
	int score;
	struct student* next;
};
//typedef struct student stu;
//struct student * create();
struct student * create(int n)   //��������
{  
	int i;
	struct student* s;
    struct student* head;
	struct student* p;
	s = ( struct student*)malloc(sizeof( struct student));
	head = s;
	p = head;
	for (i=0; i< n; i++)
	{
		s= ( struct student*)malloc(sizeof(struct student));
		printf("�������%d��ѧ������Ϣ\n", i + 1);
		printf("������ѧ��\n");
		scanf("%d", &s->id);
		printf("������ɼ�\n");
		scanf("%d", &s->score);
        ///////////////////////
		s->next = NULL;
		p->next = s;
		p = p->next;
        //////////////////////
        /*
        s->next = p->next;
		p->next = s;
		p = p->next;
		if (i == n - 1) {
			p->next = NULL;
		}
        */
	}
	return head;
} 
void print(struct student* head)    //���
{
	struct student* p;
	for (p = head->next; p != NULL; p = p->next)
	{
		printf("%d\t%d\n", p->id, p->score);
	}
}
void swap(struct student* p, struct student* q)  //��������
{	
    p->id ^= q->id;
	q->id ^= p->id;
	p->id ^= q->id;
	p->score ^= q->score;
	q->score ^= p->score;
	p->score ^= q->score;
	
}
void fun(struct student* a, struct student* b) //�ϲ�������
{
	struct student *p;
	struct student *q;
	for (p = a; p->next != NULL; p = p->next);//�ҵ�a�����һ��ָ��
	p->next = b->next;//����ָ��b
	free(b);
    
	for (p = a->next; p != NULL; p = p->next)
	{ 
		for (q = p->next; q != NULL; q = q->next)
		{
			if (p->id > q->id) 
				swap(p, q);
		}
	}
}
void main()
 {
	int n, m;
	struct student * a;
	struct student * b;
	printf("����������a�ĳ���\n");
	scanf("%d", &n);
	printf("����������b�ĳ���\n");
	scanf("%d", &m);
	printf("����������a�е�ѧ����Ϣ\n");
	a= create(n);
	printf("����������b�е�ѧ����Ϣ\n");
	b = create(m);
	printf("����aѧ����Ϣ\nѧ��\t�ɼ�\n");
	print(a);
	printf("����bѧ����Ϣ\nѧ��\t�ɼ�\n");
	print(b);
	printf("�ϲ�������ѧ����Ϣ\nѧ��\t�ɼ�\n");
	fun(a, b);
	print(a);
	system("pause");
}
