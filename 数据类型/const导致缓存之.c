#include <stdio.h>
int main()
{
	int i = 10,*p = &i;
	foo(&p); 
	printf("%d ",*p);
	printf("%d ",*p);//�ѵ���һ�ξ��Ƿ�һ�Σ� 
} 
foo(int **p)
{
	int j=11;
	*p = &j; 
	printf("%d ",**p);
}
