#include <stdio.h>

struct Studnet
{
    int num;
    char name[20];
    float score[3];
    float aver;
}stu[10];

int main()
{
    int i, j, maxj;
    float sum=0, average=0, max=0;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d%s", &stu[i].num, &stu[i].name);
        for ( j = 0; j < 3; j++)
        {
            scanf("%f", &stu[i].score[j]);
            sum += stu[i].score[j];

        }
        stu[i].aver = sum/3.0;
        sum = 0;
    }
    for ( i = 0; i < 10; i++)
    {
        average += stu[i].aver;
    }
    average /= 10.0;
    for ( i = 0; i < 10; i++)
    {
        if (stu[i].aver > max)
        {
            max = stu[i].aver;
            maxj = i;
        }
        
    }
    printf("总平均成绩=%f ",average);
	printf("最高分的学生数据：%d %s %f %f %f %f",stu[maxj].num,stu[maxj].name,stu[maxj].score[0],stu[maxj].score[1],stu[maxj].score[2],stu[maxj].aver);
}