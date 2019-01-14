#include <stdio.h>
int main(){
	int i = 10, *p = &i;
	foo(&i);
}
void foo(double *p)
{
	printf("%f",*p);
}
