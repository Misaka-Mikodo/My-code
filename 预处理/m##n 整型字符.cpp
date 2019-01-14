#include <stdio.h>
#define foo(m,n) m##n
int main()
{
	char b2a[20]="asf";
	printf("%s\n",foo(b2,a));
} 
