#include <stdio.h>
int main()
{
	int b=1;
	int bb=(b++,b);
	printf("%d",b);
}
