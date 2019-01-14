#include <stdio.h>
#include <stdlib.h>  
int main()
{
	char a[11];
	char *b1=a;
	char *b2;
	scanf("%s",&a);
	float h=strtod(b1,&b2);
	printf("%s\n%s\n",b1,b2);
	printf("%f",h);
}
