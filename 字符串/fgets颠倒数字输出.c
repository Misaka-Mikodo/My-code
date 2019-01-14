#include <stdio.h>
#include <stdlib.h>  
int main()
{
	void reverse(char* sptr);
	char s[11];
	fgets(s,11,stdin);
	reverse(s);
}
void reverse(char* sptr)
{
	if(sptr[0]=='\0') return;
	reverse (&sptr[1]);
	printf("%c",sptr[0]);
}
