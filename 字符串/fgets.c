#include <stdio.h>
#include <string.h>
int main()
{
	char line[3];
	fgets(line,3,stdin);
	printf("%d\n%s\n%d",strlen(line),line,line[1]);
	return 0;
}
