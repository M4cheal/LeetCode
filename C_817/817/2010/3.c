#include <stdio.h>

int main()
{
    int check(int n, int d);
    int n, d;
    printf("please input num and selected num:"); // 请输入数字及要查询的数字
    scanf("%d,%d", &n, &d);
    
    printf("%d", check(n, d));
}

int check(int n, int d)
{
    int flag = 0;

    while (n != 0)
    {
        if( n % 10 == d )
		{
			flag = 1;
			break;
		}
		else
        {
			n = n/10;
        }
    }
	return flag;
}