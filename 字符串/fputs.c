#include <stdio.h>

int main ()
{
   FILE *fp;

   fp = fopen("file.txt", "w+");

   fputs("这是 C 语言。\n", fp);
   fputs("这是一种系统程序设计语言。", fp);

   fclose(fp);
   
   return(0);
}
