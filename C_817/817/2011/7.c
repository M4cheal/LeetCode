#include <stdio.h>
#include<string.h>
#include<stdlib.h>
struct Student
{
	int num;
	char name[20];
	char sex[10];
	int age;
	char add[20];
}stu[20];
struct Emp
{
	int num;
	char name[20];
	char add[20];
}end[20];
int main()
{         
	FILE *fp1,*fp2;
	int i,j=0;
	if((fp1=fopen("Student.dat","rb"))==NULL)
	{
		printf("cannot open the file");
		exit(0);
	}
	for(i=0;fread(&stu[i],sizeof(struct Student),1,fp1)!=0;i++)
	{
		printf("\n%d,%s,%s,%d,%s",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].add);
		if(stu[i].num!=2001)
		{
			end[j].num=stu[i].num;
			strcpy(end[j].name,stu[i].name);
			strcpy(end[j].add,stu[i].add);
			j++;
		}
	}
	fclose(fp1);
	if((fp2=fopen("Student1.dat","wb"))==NULL)
	{
		printf("cannot open the file");
		exit(0);
	}
	for(i=0;i<j;i++)
	{
		if(fwrite(&end[i],sizeof(struct Emp),1,fp2)!=1)
			printf("error");
		printf("\n%d %s %s",end[i].num,end[i].name,end[i].add);
	}
	fclose(fp2);
}

