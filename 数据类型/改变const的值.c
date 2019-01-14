#include <stdio.h>
int main()
{
	const int i = 10;
	foo(&i);
	printf("%d",i);
} 
foo(int **p)
{
	int j=2;
	*p = j;
}
