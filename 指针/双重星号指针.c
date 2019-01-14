#include <stdio.h>
int main()
{
	int i = 10,*p = &i;
	foo(&p); //注意这边取得是指针的地址 
	printf("%d ",*p);
} 
foo(int **p)
{
	int j=2;
	*p = &j;//这个操作把原来p的值改成了j的地址 
	printf("%d ",**p);
}
