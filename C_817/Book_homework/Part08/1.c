#include<stdio.h>
int jishu(char *p)
{
    int a[10]={0};
    int i=0,j=0,b=0;
    for(i=0;*(p+i)!='\0';i++)
    {
        if(*(p+i)>='0'&&*(p+i)<='9')
        {
            b=*(p+i)-48+b*10;
            //�����⵽���ּ�ȥ48������b*10λ������ 
        }
        if((*(p+i+1)<'0'||*(p+i+1)>'9')&&b!=0)
        {
            a[j]=b;j++;b=0;
            //��⵽�����ֽ�����b��ֵ������a��Ԫ�أ�b���� 
        }        
    }

    printf("һ����%d���������ֱ�Ϊ��\n",j);
    for(i=0;i<j;i++)
    printf("%d\t",a[i]);   
}
int main()
{
    char s[]={"A123x456 17960? 302tab5876"};
    jishu(s);
}