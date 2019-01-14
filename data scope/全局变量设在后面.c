#include <stdio.h>

int main()
{
	extern int d;
	d=0;
    printf("%d",d++);
}
int d=10;
