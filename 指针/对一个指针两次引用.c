#include <stdio.h>
//register int i;   wrong
int main(){
	int k = 5;
	int *p = &k;
	printf("%d", **p);
}
