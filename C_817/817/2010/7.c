#include <stdio.h>

int binary_search(int array[], int num, int size)
{
    int found = 0, i;
    int high = size - 1, low = 0, mid;
    while (low <= high)
    {
        mid = (high+low)/2;
        if (num == array[mid])
        {
            found = 1;
            break;
        }
        else if (num < array[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return((found)?mid:-1);
    
}

int main()
{
    int binary_search(int array[],int num,int size);
	int a[7]={1,2,3,4,5,6,7},num,b;
	printf("请输入要查询的数：\n");
	scanf("%d",&num);
	b=binary_search(a,num,7);
	printf("%d",b);

}