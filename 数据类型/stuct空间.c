#include <stdio.h>
struct aa{
	char b[3];
	short int c;	
	short int a[20];
	
}a;
int main()
{
	printf("%d %d %d",sizeof(a),sizeof(int),sizeof(unsigned int));
}
