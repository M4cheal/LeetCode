// #include <stdio.h>
// void main()
// {
//     int a, b;
//     int *pointer_1, *pointer_2;
//     a = 100;
//     b = 200;
//     pointer_1 = &a;
//     pointer_2 = &*pointer_1;
//     printf("%d,%d\n", a, b);
//     printf("%d,%d\n", *pointer_1, *pointer_2);
// }
/*
//a, b, c 按从大到小排序
#include <stdio.h>
void main()
{
    void exchange(int *q1, int *q2, int *q3);
    void swap(int *a, int *b);
    int a, b ,c ,*p1, *p2, *p3;
    scanf("%d%d%d", &a, &b ,&c);
    p1 = &a;
    p2 = &b;
    p3 = &c;
    exchange(p1, p2, p3);
    printf("%d %d %d", a, b, c);
}

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
void exchange(int *q1, int *q2, int *q3){

    if (*q1 < *q2)
    {
        swap(q1, q2);
    }
    if (*q1 < *q3)
    {
        swap(q1, q3);
    }
    if (*q2 < *q3)
    {
        swap(q2, q3);
    }
    
}
 */

// #include <stdio.h>
// void main()
// {
//     int a[10] = {9, 8 ,7 ,6 ,5 ,4 ,3 ,2 ,1 ,0};

//     //下标法
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d", a[i]);
//     }
//     printf("\n");
//     //通过数组名计算数组元素地址，找出元素的值
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d", *(a+i));
//     }
//     printf("\n");
//     //指针
//     for (int *p = a; p < a + 10; p++)
//     {
//         printf("%d", *p);
//     }
    
// }

// //首尾依次转换
// #include <stdio.h>
// void main()
// {
//     void reverse(int x[], int n);
//     int i, a[10] = {9, 8 ,7 ,6 ,5 ,4 ,3 ,2 ,1 ,0};

//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d", a[i]);
//     }
//     printf("\n");
//     reverse(a, 10);
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d", a[i]);
//     }
// }

// void reverse(int *x, int n){
//     int temp, sum, *i, *j, *p;
//     sum = (n - 1)/2;
//     i = x;
//     j = x + n - 1;
//     p = x + sum;
//     for (; i <= p; i++,j--)
//     {
//         temp = *i;
//         *i = *j;
//         *j = temp;
//     }
    
// }

//指针二维数组
#include <stdio.h>
void main ()
{
    int a[3][4] = { 11, 10, 9, 8 ,7 ,6 ,5 ,4 ,3 ,2 ,1 ,0};
    int (*p)[4];
    int i, j;
    p = a ;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%5d", *(*(p + i) + j) );
        }
        
    }
    
}