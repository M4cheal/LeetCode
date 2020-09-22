// #include <stdio.h>
// void main()
// {
//     // int i, a[10];
//     // 自动补0
//     int a[10] ={} ;
//     for ( int i = 9; i >= 0; i--)
//     {
//         printf("%d", a[i]);
//     }
// }

// 斐波那契数列
// #include <stdio.h>
// void main()
// {
//     int i, a[20] = {1, 1};
//     for ( i = 2; i < 20; i++)
//     {
//         a[i] = a[i-1] + a[i-2];
//     }
//     for ( i = 0; i < 20; i++)
//     {
//         if (0 == i%5)
//         {
//             printf("\n");
//         }
//         printf("%12d", a[i]);
//     }
// }

// 冒泡排序
#include <stdio.h>
void main()
{
    int a[10];
    printf("input 10 number:\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n");

    for (int j = 10; j > 0; j--)
    {
        for (int i = 0; i < j - 1; i++)
        {
            if (a[i] > a[i+1])
            {
                int c = a[i];
                a[i] = a[i+1];
                a[i+1] = c;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d,", a[i]);
    }
}