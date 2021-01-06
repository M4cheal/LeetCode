#include <stdio.h>
#include <string.h>
struct Student
{
    int num;
    char name[20];
    float score[3];
    float aver;
}stu[100];

void swap(struct Student *a, struct Student *b){
    struct Student t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int i=0, j, k;
    
    printf("输入学生信息：\n");
    while (1)
    {
        scanf("%d%s", &stu[i].num, stu[i].name);
        for ( j = 0; j < 3; j++)
        {
            scanf("%f", &stu[i].score[j]);
            stu[i].aver += stu[i].score[j];
        }
        stu[i].aver /= 3.0;

        if ((stu[i].score[0]==0)&&(stu[i].score[1]==0)&&(stu[i].score[2]==0))
        {
            break;
        }
        i++;
    }

    for ( k = 0; k < i-1; k++)
    {
        for ( j = 0; j < i-1-k; j++)
        {
            if (stu[j].aver < stu[j+1].aver)
            {
                swap(&stu[j], &stu[j+1]);
            }
            
        }
        
    }
    for ( k = 0; k < i; k++)
    {
        printf("\nNum=%d,Name=%s\n",stu[k].num,stu[k].name);
        for(j=0;j<3;j++)
			printf("%0.1f",stu[k].score[j]);
		printf("\naverage=%0.1f",stu[k].aver);
    }
    
    
    
}

