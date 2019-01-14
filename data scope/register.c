#include <stdio.h>
//register int i;   wrong
int main()
{ 
    register int i;
	//register const int i = 10;
	//int *p = &i;
	//*p = 11;
	i = 11;
	printf("%d", i);
}
