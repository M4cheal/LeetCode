// #include <stdio.h>
// void main()
// {
//     void printstar();
//     void print_Message();

//     printstar();
//     print_Message();
//     printstar();
// }
// void printstar() 
// {
//     printf("*******\n");
// }
// void print_Message()
// {
//     printf("hello world!\n");
// }
// #include<stdio.h>
// #include "aaa.c"
// int fact(int); //声明阶乘fact函数
// int main(){
// 	 int x;
// 	 scanf("%d",&x);
// 	 x = fact(x);//调用函数返回int值
// 	 printf("%d\n",x);
// }

#include <stdio.h>
#include <string.h>
/*
 算法思路：1将 n-1个盘子先放到B座位上
          2.将A座上地剩下的一个盘移动到C盘上
          3、将n-1个盘从B座移动到C座上
*/
//函数声明
void move(char x, char y);
void hannuo(int n,char one ,char two,char three)
{
  if(n==1)move(one, three); //递归截止条件
  else
  {
    hannuo(n-1,one ,three,two);//将 n-1个盘子先放到B座位上
    move(one,three);//将A座上地剩下的一个盘移动到C盘上
    hannuo(n-1,two,one,three);//将n-1个盘从B座移动到C座上
  
  }
}
void move(char x,char y)
{
 printf("%c--->%c \n",x,y);
}
 
int main()
{
 int n;
 printf("input your number");
 scanf("%d",&n);
 hannuo(n,'A','B','C');
 return 0;
}

