#include <stdio.h>
#define N 3
struct Student
{
    int num;
    char name[20];
    int age;
    float high, weigh;
}stu[N];

int main()
{
    int i, n= 0;
    float averhigh=0, averweigh=0, sumhigh=0, sumweigh=0;
    for ( i = 0; i < N; i++)
    {
        printf("input student manage:\n", i);
        scanf("%d%s%d%f%f", &stu[i].num, &stu[i].name, &stu[i].age, &stu[i].high, &stu[i].weigh);
        sumhigh += stu[i].high;
        sumweigh += stu[i].weigh;
    }
    averhigh = sumhigh/N;
    averweigh = sumweigh/N;
    printf("ƽ�����=%0.3f", averhigh);
    printf("ƽ������=%0.3f", averweigh);
    for ( i = 0; i < N; i++)
    {
        if (stu[i].weigh > averweigh)
        {
            printf("num=%d, name=%s, age=%d, high=%f, weight=%f\n",stu[i].num,stu[i].name,stu[i].age, stu[i].high,stu[i].weigh);
            n++;
        }
        
    }
    printf("ƽ���������ϵ�����=%d", n);
}