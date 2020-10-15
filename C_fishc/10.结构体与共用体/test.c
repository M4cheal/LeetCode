#include <stdio.h>

typedef int aaa;
struct date
{
    int month;
    int day;
    int year;
};
struct student
{
    int num;
    char name[20];
    char sex;
    struct date birthday;
    float score;
    char addr[30];
}boy1, boy2;

void main()
{
    struct student student1[2]={
        {1, "jjh", 'm', {.day = 14, .month = 4, .year = 1999}, 320, "ln"  },
        {2, "yxl", 'm', {.day = 104, .month = 04, .year = 19099}, 100, "l0n"  }
    };
}
