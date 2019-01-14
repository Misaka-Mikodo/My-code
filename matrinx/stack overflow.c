#include <stdio.h>
#include <windows.h>
void reverse(int);
int main()
{
	reverse(1);
}
void reverse(int i)
{
	if(i>5)
	exit(0);
	printf("%d\n",i);
	return reverse((i++,i));
}
