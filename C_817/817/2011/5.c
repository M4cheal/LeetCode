#include <stdio.h>

int main()
{
    void fun(int n);
    int n;
    printf("Please enter the number:");
    scanf("%d", &n);
    if (n < 0)
    {
        putchar('-');
        n = -n;
    }
    fun(n);
    
}
void fun(int n)
{
    int i;
    putchar(n%10 + '0');
    if ((i=n/10) != 0)
    {
        fun(i);
    }
    
}