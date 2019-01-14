#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double sum=0.0;
	scanf("%d",&n);
	int a[100001];
	for(int i=1;i<=n;++i)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	double ave=sum/n;
	sum=0;
	for(int i=1;i<=n;++i)
	{
		sum+=pow(a[i],2)-pow(ave,2);
	}
	printf("%.2f%.2f",ave,sum/n);
} 
