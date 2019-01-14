#include <stdio.h>
int main()
{
	int i = 10,*p = &i;
	foo(&p); 
	printf("%d ",*p);
	printf("%d ",*p);//难道用一次就是放一次？ 
} 
foo(int **p)
{
	int j=11;
	*p = &j; 
	printf("%d ",**p);
}
