#include <stdio.h>

int main ()
{
   FILE *fp;

   fp = fopen("file.txt", "w+");

   fputs("���� C ���ԡ�\n", fp);
   fputs("����һ��ϵͳ����������ԡ�", fp);

   fclose(fp);
   
   return(0);
}
