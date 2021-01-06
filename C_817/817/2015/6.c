#include <stdio.h>
#include <stdlib.h>

struct Student
{
    int num;
    char name[20];
    char sex[10];
    int age;
    char add[20];
}stu[20];
void swap(struct Student *a, struct Student *b)
{
    struct Student t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    FILE *fp, *fp1, *fp2;
    int i, j, n;
    struct Student t;
    if ((fp1=fopen("StudentA.dat","rb")) == NULL)
    {
        printf("cannot the file A");
        exit(0);
    }
    for ( i = 0; fread(&stu[i], sizeof(struct Student), 1, fp1); i++)
    {
        printf("%d,%s,%s,%d,%s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].add);
    }
    fclose(fp1);

    if ((fp2=fopen("StudentB.dat","rb")) == NULL)
    {
        printf("cannot the file B");
        exit(0);
    }
    for ( j = i; fread(&stu[i], sizeof(struct Student), 1, fp2); i++)
    {
        printf("%d,%s,%s,%d,%s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].add);
    }
    fclose(fp2);
    n = j;
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-1-i; j++)
        {
            if (stu[j].num > stu[j+1].num)
            {
                swap(&stu[j], &stu[j+1]);
            }
            
        }
        
    }

    if ((fp=fopen("StudentC.dat", "wb")) == NULL)
    {
        printf("cannot the file C");
        exit(0);
    }
    for ( i = 0; i < n; i++)
    {
        fwrite(&stu[i], sizeof(struct Student), 1, fp);
        printf("%d,%s,%s,%d,%s\n",stu[i].num,stu[i].name,stu[i].sex,stu[i].age,stu[i].add);
    }
    fclose(fp);
}