#include <stdio.h>
#include <stdlib.h> 
int main()
{
	int n;
	scanf("%d",&n);
	while(n--) 
	{
		int i;
		scanf("%d",&i);
		if(i%3==0) printf("xinpang win!\n");
		else printf("dalao win!\n");
	}
}
