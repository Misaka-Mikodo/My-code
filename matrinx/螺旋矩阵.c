#include <stdio.h>
int a[101][101]={0},n;
int pd(int i,int j,int sum)
{
	if(sum<=n*n&&a[i][j]==0)
	 {
	 	a[i][j]=sum;
	    return sum+1;
	 }
	else return sum;
}
int main()
{
	int i=1,j=1,sum=1;
	scanf("%d",&n);
	while(sum<=n*n)
	{
		for(;j<n;++j) sum=pd(i,j,sum);
		j--;
		for(;i<=n;++i) sum=pd(i,j,sum);
		i--;
		for(;j>=1;--j) sum=pd(i,j,sum);
		j++;
		for(;i>=1;--i) sum=pd(i,j,sum);
		i++;
	}
	for(i=1;i<=n;++i)
	{
		for(j=1;j<=n-1;++j)
		{
			printf("%-4d",a[i][j]);
		}
		printf("%d\n",a[i][j]);
	}
}
