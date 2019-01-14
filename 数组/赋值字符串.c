#include <stdio.h> 
#include <string.h> 
int main()
{
	char a[1][5]={"hello"};
	printf("%s  %d  %d",a[0],sizeof(a),strlen(a));
}
