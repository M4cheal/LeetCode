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
// #include <stdio.h>
// void main()
// {
//     int a[10];
//     printf("input 10 number:\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("\n");

//     for (int j = 10; j > 0; j--)
//     {
//         for (int i = 0; i < j - 1; i++)
//         {
//             if (a[i] > a[i+1])
//             {
//                 int c = a[i];
//                 a[i] = a[i+1];
//                 a[i+1] = c;
//             }
//         }
//     }
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d,", a[i]);
//     }
// }


// 二分法
#include <stdio.h>
#define M 10
void main()
{
    static int a[M] = {-12, 0, 6, 16,
                        23, 56, 80, 100, 110, 115};
    int n, low, mid, high, found;
    low = 0;
    high = M - 1;
    found = 0;
    printf("please input a number:\n");

    while (scanf("%d", &n) != 1)
    {
        printf("Illegal input!!\nPlease input again!!\n");
        getchar();// 消耗一个流，防止scanf直接读以前的流，导致无法输入
    }
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == n)
        {
            found = 1;
            break;
        }
        else if (n > a[mid])
        {
            low = mid + 1;
        }else
        {
            high = mid - 1;
        }
    }
    if (found == 1)
    {
        printf("The index of %d is %d", n, mid);
    }
    else
    {
        printf("There is not %d", n);
    }                   
}