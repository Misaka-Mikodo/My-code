#include <stdio.h>
int main()
{
	//char str[11];
	char str[11] = "hello";
	char *strl = "world" ;
	strcat(str, strl);
	printf("%s %d", str, str[10]);
}
