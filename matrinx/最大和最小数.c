#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int max=-100000000,min=10000000;
	for(int i=1;i<=n;++i)
	{
		int a;
		scanf("%d",&a);
		if(a>max) max=a;
		if(a<min) min=a;
	}
	printf("%d %d\n",max,min);
}
