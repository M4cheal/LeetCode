#include <stdio.h>
#include <stdlib.h>

struct student
{
    int num;
    char name[20];
    float score[3];
    float aver;
}stu[30];

int main()
{
    FILE *fp;
    int i, j;
    float average = 0;
    printf("请输入学生信息:\n");
    for ( i = 0; i < 2; i++)
    {
        printf("请输入num,name:\n");
        scanf("%d%s", &stu[i].num, stu[i].name);
        for ( j = 0; j < 3; j++)
        {
            printf("请输入学生成绩:\n");
            scanf("%f", &stu[i].score[j]);
            average += stu[i].score[j];
        }
        stu[i].aver = average/3.0;
        average = 0;
    }
    if ((fp=fopen("stud.dat", "wb")) == NULL)
    {
        printf("cannot the file");
        exit(0);
    }
    for ( i = 0; i < 2; i++)
    {
        if (fwrite(&stu[i], sizeof(struct student), 1, fp) != 1)
        {
            printf("error");
        }

    }
    fclose(fp);
    fp = fopen("stud.dat", "rb");
//    rewind(fp);
    
    for ( i = 0; i < 2; i++)
    {
        fread(&stu[i], sizeof(struct student), 1, fp);
        printf("\n%d,%s,%f,%f,%f,%f",stu[i].num,stu[i].name,stu[i].score[0],stu[i].score[1],stu[i].score[2],stu[i].aver);
    }
    
    
    
}