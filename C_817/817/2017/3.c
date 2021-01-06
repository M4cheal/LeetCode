#include<stdio.h>
#define n 20
int main()
{
	int a[n],i,j,k,t;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
    for ( i = 0; i < n-1; i++)
    {
        k = i;
        for ( j = i+1; j < n; j++)
        {
            if (a[j] < a[k])
            {
                k = j;
            }
            
            if (k != i)
            {
                t = a[i];
                a[i] = a[k];
                a[k] = t;
            }
            
        }
        

    }
    

	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
