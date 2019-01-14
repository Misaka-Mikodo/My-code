#include <stdio.h>
void f();
int main()
{
	#define max 10
	f();
	return 0;
} 
void f()
{
	printf("%d\n",max*10);
}
