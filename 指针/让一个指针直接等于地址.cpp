# include <stdio.h>
int main()
{
	int i = 10,*p = &i;
	foo(&i);
	printf("%d\n",*p);
} 
foo(int *p)
{
	int j = 2;
	p=&j;//ע���p�Ǳ�p  
	//���Կ��������뷨--//*p=&j ��������ֵ //*p=j;  �����2 
	printf("%d\n",*p);
}
