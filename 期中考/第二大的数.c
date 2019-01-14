#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		int num,a;
		int max=-1000,dmax=-1000;
		scanf("%d",&num);
		for(int j=1;j<=num;++j)
		{
			scanf("%d",&a);
			if(a>max)
			{
				int temp=max;
				max=a;
				dmax=temp;
			}
			else if(a>dmax) dmax=a;	
		}
		printf("%d",dmax);
	} 
}
