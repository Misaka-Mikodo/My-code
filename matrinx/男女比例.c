#include <stdio.h>
#include <time.h>
#include <stdlib.h>  
int main()
{
	srand(time(0));
	int n;

	int man=0,woman=0;
	for(n=1;n<=10000;++n)
	{
		int i;
		do
	{
			i=rand();
	        i%=2;
		    if(i==0) man++;
		      else woman++; 
	}while(i); 
	}
	
	printf("%d %d",man,woman);
	
} 
