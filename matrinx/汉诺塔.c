#include <stdio.h>
void hano(int begin,int end,int fz,int num)
{
	if(num==1)
	{
		printf("%d%d\n",begin,end);
	}
	else 
	{
		hano(begin,fz,end,num-1);
		hano(begin,end,fz,1);
		hano(fz,end,begin,num-1);
	}
} 
int main()
{
	int n,a=1,b=2,c=3;
	scanf("%d",&n);
	hano(a,c,b,n);
} 
