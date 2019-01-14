#include <stdio.h>
int main()
{
	int a=2,b=3;
	int *p1=&a,*p2=&b;
	int *sptr=&p1;
	sptr=p2;
	printf("%p  %p",p1,p2);
}
