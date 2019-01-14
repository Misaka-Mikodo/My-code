#include <stdio.h>
#include <stdlib.h>
int main()
{
	char a[16],b[16];
	scanf("%[^\n]",a);
	getchar();
	scanf("%[^\n]",b);
	printf("%s",a);
	printf("%s",b);
}
