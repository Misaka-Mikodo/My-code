#include<stdio.h>
int main()
{
	long long int n,m,i,j,a1,a2,sum;
	int op;
	int a[100000];
	scanf("%lld%lld",&n,&m) ;
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	{   sum=0;
		scanf("%d%lld%lld",&op,&a1,&a2);
		if(op==1)
		{
			for(j=a1-1;j<a2;j++)
			{
				sum=sum+a[j];
			}
			printf("%lld\n",sum);
		}
		else if(op==2)
		{
			a[a1-1]=a2;
		}
	}
	return 0;
} 
