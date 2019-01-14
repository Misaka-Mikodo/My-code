#include <stdio.h>
int main()
{
	//char str[11];
	char *str = "hello,world";
	char *strl = "hello,world";
	if(strcmp(str, strl))
		printf("equal");
	else 
		printf("unequal"); 
}
