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
	p=&j;//注意此p非彼p  
	//可以考虑以下想法--//*p=&j 出现垃圾值 //*p=j;  都变成2 
	printf("%d\n",*p);
}
