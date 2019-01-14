#include <stdio.h>
#include <string.h>
int main()
{
	char a[201];
	scanf("%s",a);
	int al=strlen(a);
	for(int i=al-1;i>=0;--i)
	printf("%c",a[i]);
}
