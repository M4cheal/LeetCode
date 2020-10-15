// #include <stdio.h>
// #include <stdlib.h>
// void main()
// {
//     FILE *fp;
//     if (!(fp=fopen("./fishc.txt", "w")))
//     {
//         printf("Can not open file! \n");
//         system("pause");
//     }else
//     {
//         printf("Open success! \n");
//     }
// }


// void main()
// {
//     FILE *fp;
//     char ch, filename[20];
//     printf("please input filename");
//     scanf("%s", filename);
//     if (!(fp = fopen(filename, "wt+")))
//     {
//         printf("cannot open \n");
//         exit(0); // 终止程序
//     }
//     printf("please input write");
//     ch = getchar();
//     ch = getchar();
//     while ( ch != EOF) // ctrl + z
//     {
//         fputc(ch, fp);
//         ch = getchar();
//     }
//     fclose(fp);
// }


// 隐写
// #include <stdio.h>
// #include <stdlib.h>

// void main()
// {
//     FILE *f_pic, *f_file, *f_finish;
//     char ch, pic_name[20], file_name[20], finish_name[20];
//     printf("请输入需要合成的图片和文件名称:\n");
//     printf("图片：");
//     scanf("%s", pic_name);
//     printf("文件：");
//     scanf("%s", file_name);
//     printf("生成为：");
//     scanf("%s", finish_name);

//     if(!(f_pic = fopen(pic_name, "rb")))
//     {
//         printf("Connot open the picture %s!", pic_name);
//         return;
//     }
//     if (!(f_file = fopen(file_name, "rb")))
//     {
//         printf("Connot open the file %s!", file_name);
//         return;
//     }
//     if (!(f_finish = fopen(finish_name, "wb")))
//     {
//         printf("Connot open the picture %s!", pic_name);
//         return;
//     }
//     while (!(feof(f_pic)))
//     {
//         ch = fgetc(f_pic);
//         fputc(ch ,f_finish);
//     }
//     fclose(f_pic);
//     while (!(feof(f_file)))
//     {
//         ch = fgetc(f_file);
//         fputc(ch ,f_finish);
//     }
//     fclose(f_file);

//     system("pause");
// }

