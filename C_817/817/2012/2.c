#include<stdio.h>
#include <string.h>
int main()
{
	int la, lb, maxlen, k;
	char a[100], b[100];
	int a1[100]={0}, b1[100]={0};
	int i, m;
	char r[100];
	gets(a);
	gets(b);
	la = strlen(a);
	lb = strlen(b);
	if( la > lb )
		maxlen = la;
	else
		maxlen = lb;
	m = maxlen;
	for(i=0; i < la; i++, m--)
		a1[m] = a[la-1-i] - '0';
	m=maxlen;
	for(i=0;i<lb;i++,m--)
		b1[m]=b[lb-1-i]-'0';

	// for(i=maxlen;i>=0;i--) //加法        
	// {                                 
	// 	a1[i]+=b1[i];                  
	// 	if(a1[i]>9)                    
	// 	{                              
	// 		a1[i]=a1[i]-10;            
	// 		a1[i-1]++;                 
	// 	}                              
	// }    


    for(i=maxlen;i>=0;i--) //减法   
	{                                 
		a1[i]-=b1[i];                  
		if(a1[i]<0)                    
		{                              
			a1[i]=a1[i]+10;            
			a1[i-1]--;                 
		}                              
	}                              

	if(a1[0]!=0)
    {
        for(i=0;i<=maxlen;i++)
            printf("%d",a1[i]);
    }
	else
	{
		for(i=1;i<=maxlen;i++)
			printf("%d",a1[i]);
	}
}