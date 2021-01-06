#include <stdio.h>
struct Student
{
    int num;
    char name[20];
    float score;
}stu[10];
void swap(struct Student *a, struct Student *b){
    struct Student t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int i, min, j;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d%s%f", &stu[i].num, stu[i].name, &stu[i].score);
    }
    for ( i = 0; i < 9; i++)
    {
        min = i;
        for ( j = i+1; j < 10; j++)
        {
            if (stu[j].score < stu[min].score)
            {
                min = j;
            } 
        }
        if (min != i)
        {
            swap(&stu[min], &stu[i]);
        }
        
    }
    for(i=0;i<10;i++)
    {
        printf("%d\t%s\t%f\n",stu[i].num,stu[i].name,stu[i].score);
    }

        
}
