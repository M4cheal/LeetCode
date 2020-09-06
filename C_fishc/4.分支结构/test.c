// #include <stdio.h>

// void main()
// {
//     int a, b, max;
//     printf("\n input two numbers:");
//     scanf("%d%d", &a, &b);
//     if (a > b)
//     {
//         printf("max = %d", a);
//     }else
//     {
//         printf("max = %d", b);
//     }
// }

/***
 * 插入一个分数score
 */
// #include <stdio.h>
// void main()
// {
//     int score;
//     printf("input score");
//     scanf("%d", &score);
//     if (score >= 90)
//     {
//         printf("A");
//     }else if (score >= 80 && score < 90)
//     {
//         printf("B");
//     }else if (score >= 70 && score < 80)
//     {
//         printf("C");
//     }else if (score >= 60 && score < 70)
//     {
//         printf("D");
//     }else
//     {
//         printf("E");
//     }
// }


/**
 * 输入三个数a, b, c, 要求按从小到大的顺序输出。
 */
// #include <stdio.h>
// void main()
// {
//     int a, b, c, temp;
//     scanf("%d%d%d", &a, &b, &c);
//     if (a > b)
//     {
//         temp = a;
//         a = b;
//         b = temp;
//     }
//     if (a > c)
//     {
//         temp = a;
//         a = c;
//         c = temp;
//     }
//     if (b > c)
//     {
//         temp = b;
//         b = c;
//         c = temp;
//     }
//     printf("%d%d%d", a, b, c);
// }

#include <stdio.h>
void main()
{
    char ch;
    int a = 3;
    //scanf("%c", &ch);
    //ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
    printf("%c", ch);
    switch (a)
    {
    case 1:
        printf("1");
        break;
    case 2:
        printf("2");
        break;
    default:
        printf("error");
        break;
    }
}