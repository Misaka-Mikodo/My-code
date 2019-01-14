#include <stdio.h>
#include <string.h>
int main()
{
	char *a="kugimiya\0""rie";
	printf("%p  %d",a,strlen(a));
}
