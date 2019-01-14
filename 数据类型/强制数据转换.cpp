#include <stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int b=5; 
	for(int i=0;i<5;++i)
	if((char)a[i]=='5')
	 printf("%d",a[i]);
	else 
	 printf("1");
	char c=(char)b;
	printf("%c",c);
}
