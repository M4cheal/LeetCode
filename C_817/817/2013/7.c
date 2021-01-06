#include <stdio.h>

struct Student
{
    int num;
    char name[20];
    char sex[10];
    float score;
}stu[100];
int main()
{
    FILE *fp;
    float sum = 0, aver;
    int i, j, a=0, b=0;
    if ((fp=fopen("stu.dat", "rb"))==NULL)
    {
        printf("connot open the file");
        exit(0);
    }
    for ( i = 0; fread(&stu[i], sizeof(struct Student), 1, fp) != 0; i++)
    {
        printf("%d,%s,%s,%f", stu[i].num,stu[i].name,stu[i].sex,stu[i].score);
        sum += stu[i].score;
    }
    aver = sum/i;
    fclose(fp);
    if ((fp=fopen("REsult.dat", "w")) == NULL)
    {
        printf("connot open the file");
        exit(0);
    }
    for ( j = 0; j < i; j++)
    {
        if (aver < stu[j].score)
        {
            a++;
        }
        if (aver > stu[j].score)
        {
            b++;
        }
    }
    fprintf(fp, "%d%d", a, b);
    
    printf("低于平均成绩人数=%d，高于平均人数成绩=%d", a, b);
	fclose(fp);
}