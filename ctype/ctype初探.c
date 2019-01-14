#include <stdio.h>
#include <ctype.h>  
int main()
{
	char c;
	scanf("%c",&c);
	int a=isblank(c);
	if(a) printf("true");
	else printf("false");
}
