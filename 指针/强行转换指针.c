#include <stdio.h>
int main(){
	float i = 10;
	void *p = &i;
	printf("%f", *(float *)p);
}
