#include <stdio.h>
int main()
{
	int i = 10,*p = &i;
	foo(&p); //ע�����ȡ����ָ��ĵ�ַ 
	printf("%d ",*p);
} 
foo(int **p)
{
	int j=2;
	*p = &j;//���������ԭ��p��ֵ�ĳ���j�ĵ�ַ 
	printf("%d ",**p);
}
