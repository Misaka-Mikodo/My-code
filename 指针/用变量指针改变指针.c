#include <stdio.h>
int main()
{
	const int y=2;
	int *a=&y;
	*a=1;
	printf("%d",y); 
	
}
