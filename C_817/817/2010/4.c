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
struct student * create(int n)   //创建链表
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
		printf("请输入第%d个学生的信息\n", i + 1);
		printf("请输入学号\n");
		scanf("%d", &s->id);
		printf("请输入成绩\n");
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
void print(struct student* head)    //输出
{
	struct student* p;
	for (p = head->next; p != NULL; p = p->next)
	{
		printf("%d\t%d\n", p->id, p->score);
	}
}
void swap(struct student* p, struct student* q)  //交换函数
{	
    p->id ^= q->id;
	q->id ^= p->id;
	p->id ^= q->id;
	p->score ^= q->score;
	q->score ^= p->score;
	p->score ^= q->score;
	
}
void fun(struct student* a, struct student* b) //合并并排序
{
	struct student *p;
	struct student *q;
	for (p = a; p->next != NULL; p = p->next);//找到a的最后一个指针
	p->next = b->next;//让它指向b
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
	printf("请输入链表a的长度\n");
	scanf("%d", &n);
	printf("请输入链表b的长度\n");
	scanf("%d", &m);
	printf("请输入链表a中的学生信息\n");
	a= create(n);
	printf("请输入链表b中的学生信息\n");
	b = create(m);
	printf("链表a学生信息\n学号\t成绩\n");
	print(a);
	printf("链表b学生信息\n学号\t成绩\n");
	print(b);
	printf("合并排序后的学生信息\n学号\t成绩\n");
	fun(a, b);
	print(a);
	system("pause");
}
