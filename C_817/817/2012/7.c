//����һ
#include<stdio.h>
#include<stdlib.h>
int main()
{	
	char ch;
	FILE *fptr, *copyptr;
	if ((fptr = fopen("sun.txt", "r")) == NULL)
	{
     	printf("Can't open the source file.\n");
	}
	else if ((copyptr = fopen("sun2.txt", "w")) == NULL)
	{
		printf("Can't open the destination file.\n");
	}
    while((ch=fgetc(fptr))!=EOF)
    {
            if(ch=='/')
            {
                if((ch=fgetc(fptr))=='/')
                {
                    while((ch=fgetc(fptr))!=EOF&&ch!='\n')
                    {  };
                    fputc(ch,copyptr);//fputc�����Ĺ����ǰ�һ���ַ�д��ָ�����ļ��У��������� ��ʽΪ�� fputc(�ַ������ļ�ָ��)��
                }else if(ch=='*')
                {
                    while((ch=fgetc(fptr))!=EOF&&ch!='*'||(ch=fgetc(fptr))!=EOF&&ch!='/');//while��һ����ѭ�� ��ע�͵����ݶ������ˣ�
                }else
                {
                    fputc('/',copyptr);
                    fputc(ch,copyptr);
                }
            }
            else
                fputc(ch,copyptr);
    }
    fclose(fptr);
    fclose(copyptr);
}
















// ������
// #include <stdio.h>
// int main()
// {         
// 	FILE *fp=fopen("sun.txt","r");
// 	char next;
// 	if(!fp)
// 		return 0;
// 	while(!feof(fp) )//feof()������ϵ��ļ�������������ļ��������򷵻ط�0ֵ��δ�������򷵻�0
// 	{
// 		if(fgetc(fp)=='/')
// 		{
// 			next=fgetc(fp);
// 			if(next=='/')
// 			{
// 				while(putchar(fgetc(fp))!='\n'); // ���//���沿��			
// 			}
// 			else if(next=='*')
// 			{
// 				while(1)
// 				{
// 					if(putchar(fgetc(fp))=='*')//��*�����ж�
// 					{
// 						if(putchar(fgetc(fp))=='/') //�ж�*�����ǲ���/
// 						break;
// 					}
// 				}
// 				printf("\b\b  \n");//�˸� �˸� ����  �������һ�� * �� / ����Ҫ�˸�
// 			}
// 		}
// 	}
// 	fclose(fp);
// 	return 0;
// }
