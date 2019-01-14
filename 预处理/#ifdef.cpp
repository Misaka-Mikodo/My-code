#include <stdio.h>
#define system 10
int main() 
{
	int a=2;
	#ifdef system 
	a=1;
	#endif
	printf("%d",a);
	
} 
