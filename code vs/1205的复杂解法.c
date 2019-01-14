#include <stdio.h>
#include <string.h>
int main()
{
	char a[101];
	scanf("%[^\n]",&a);
	int i,j,t,w=strlen(a)-1,flag=0;
	for(i=strlen(a)-1;i>=0;--i)//注意最后的单词无法输出 
	{
		if(a[i]==' ') 
		{
			flag=1;
			t=i+1;
		} 
		if(flag)
		{
			flag=0;
			for(j=t;j<=w;++j)
			 printf("%c",a[j]);
			printf(" ");
			w=i-1;
		}
	}
	for(j=0;j<=w;++j)//补充无法输出的字母 
		printf("%c",a[j]);
}
