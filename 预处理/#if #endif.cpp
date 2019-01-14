#include <stdio.h>
#define system 20
int main() 
{
	int a=20;
	#if system==a
	printf("hello");
	#endif
	#if system==20
	printf("world");
	#endif
}
