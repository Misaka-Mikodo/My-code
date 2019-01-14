#include <stdio.h>
#include <string.h>
int main()
{
	char *str = "hello";
	char strl[5];
	//char *strl = "hello";
	//printf("%d", strcmp(str, strl));
	//strncpy(strl, str, 5);
	strcpy(str, strl);
	printf("%s", strl);
	//printf("%s %d", strl, strlen(strl));
}
