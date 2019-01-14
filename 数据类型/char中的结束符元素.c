#include <stdio.h>
int main()
{
	char * str="sanfoundry.com\0""class";
	printf("%s ",str);
	printf("%d",sizeof(str)); 
}
