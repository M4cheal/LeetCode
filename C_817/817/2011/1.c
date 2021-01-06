#include <stdio.h>
#include<math.h>
int main()
{         
	float sinx=0;
	float temp;
	int m=1,mul=1; //m表示正负号 mul为阶乘值
	int x,i,j;
	scanf("%d",&x);
	i = 1;
    do
    {
        mul = 1;
        for ( j = 1; j < i+1 ; j++)
        {
            mul = mul * j;
        }
        temp = m * pow(x, i) / mul;
        sinx += temp;
        m = -m;

        i+=2;
    } while( fabs(temp) >= 1e-5 );

	printf("%f\n",sinx);
}
