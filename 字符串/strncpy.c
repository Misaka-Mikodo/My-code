#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "hello,world";
	char strl[9];
	strncpy(strl, str, 9);
	printf("%s %d", strl, strlen(strl));
}
