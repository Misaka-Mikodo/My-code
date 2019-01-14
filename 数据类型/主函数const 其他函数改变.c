#include <stdio.h>
int main()
{
	int i = 10,* const p = &i;
	foo(&p); 
	printf("%d ",*p);
} 
foo(int **p)
{
	int j=11;
	*p = &j; 
	printf("%d ",**p);
}
