#include <stdio.h>
#include <string.h>
int main()
{
	char a[101][11];
	int n=0;
	while(~scanf("%s",a[n])) n++;//EOFΪ-1����λȡ����0 
	int i;
	for(i=0;i<n;++i)
	  printf("%s ",a[n-i-1]);
	printf("\n");
}
