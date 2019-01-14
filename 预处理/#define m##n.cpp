#include <stdio.h>
#define foo(m,n) m##n
int main()
{
	printf("%d\n",foo(2,3));
} 
