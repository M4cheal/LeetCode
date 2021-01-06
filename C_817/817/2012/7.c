//方法一
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
                    fputc(ch,copyptr);//fputc函数的功能是把一个字符写入指定的文件中，函数调用 形式为： fputc(字符量，文件指针)；
                }else if(ch=='*')
                {
                    while((ch=fgetc(fptr))!=EOF&&ch!='*'||(ch=fgetc(fptr))!=EOF&&ch!='/');//while是一个空循环 把注释的内容都跳过了！
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
















// 方法二
// #include <stdio.h>
// int main()
// {         
// 	FILE *fp=fopen("sun.txt","r");
// 	char next;
// 	if(!fp)
// 		return 0;
// 	while(!feof(fp) )//feof()检测流上的文件结束符，如果文件结束，则返回非0值。未结束否则返回0
// 	{
// 		if(fgetc(fp)=='/')
// 		{
// 			next=fgetc(fp);
// 			if(next=='/')
// 			{
// 				while(putchar(fgetc(fp))!='\n'); // 输出//后面部分			
// 			}
// 			else if(next=='*')
// 			{
// 				while(1)
// 				{
// 					if(putchar(fgetc(fp))=='*')//遇*进行判断
// 					{
// 						if(putchar(fgetc(fp))=='/') //判断*后面是不是/
// 						break;
// 					}
// 				}
// 				printf("\b\b  \n");//退格 退格 换行  最后多输出一个 * 和 / 所以要退格
// 			}
// 		}
// 	}
// 	fclose(fp);
// 	return 0;
// }
