#include <stdio.h>
#include <math.h>
	long long int a[20001];
	long long int sum[20001];
int main()
{
	int n,m,temp,l,r,op;
	long long int s;
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;++i)
	 scanf("%lld",&a[i]);
	 sum[n]=a[n]; 
	 for(int j=n-1;j>=1;--j)
	  sum[j]=sum[j+1]+a[j];
	int point=1;
	int zz=0;
	while(m--)
	{
		scanf("%d",&op);
		if(op==1)
		{
			zz=-zz;
			point=-point;
		}
		if(op==2)
		{
			scanf("%d",&temp);
			zz+=temp;
		}
		if(op==3)
		{
			scanf("%d%d",&l,&r);
			s=sum[l]-sum[r+1];
			printf("%lld\n",s*point+zz*(r-l+1));
		}
	}
}
