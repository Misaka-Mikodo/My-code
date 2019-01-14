#include <stdio.h>
int main()
{
	//int x=1;
	//int y=x==1?getchar():2;
	//printf("%d",y);
	int x=1;
	short int i=2;
	float f=3;
	if(sizeof((x==2)?f:i)==sizeof(float))
	 printf("float\n"); 
}
