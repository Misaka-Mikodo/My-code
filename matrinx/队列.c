#include <stdio.h>
int main()
{
	int a[10];
	int num=0;
	int op;
	int t=0,w=0,temp;
	while(scanf("%d",&op)!=EOF)
	{
		switch(op)
		{
			case 0:if(num==0) printf("empty\n");
			       else 
				   {
				   	num--;
				   	printf("%d\n",a[w++]);
				   	if(w>=10) w%=10;
				   }
			       break;
			
			case 1:{
				   scanf("%d",&temp);
				   if(num==10) printf("full\n");
			       else 
				   {
					   num++;
					   a[t++]=temp;
					   if(t>=10) t%=10;
				   }
				   break;
			}
		}
	}
} 
