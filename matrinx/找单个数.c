#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		int b[10]={0},point=0;
		int num;
		scanf("%d",&num);
		for(int j=1;j<=num;++j)
		{
			int temp;
			scanf("%d",&temp);
			b[temp]++;
		}
		for(int i=0;i<=9;++i)
		{
			if(b[i]!=0)
			printf("%d %d\n",i,b[i]);
		}
	}
}
