#include <stdio.h>
int main()
{
	char *str="hello world!!!!!!!!";
	char strc[]="hello world!!!!!!!";
	//str[4]=',';  ��ס 
	printf("%d\n%d\n",strlen(str),strlen(strc));
	char strc1[]="good monring";
	strcpy(strc1,str);
	printf("%s",strc1);//strc����ʾ������̾�� 
} 
