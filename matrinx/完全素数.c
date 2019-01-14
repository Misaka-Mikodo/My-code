#include <stdio.h>
#include <math.h>
int pow(int x,int y)
{
	int sum=1;
	while(y--) 
	 sum*=x;
	return sum;
}
bool sushu(int i)
{
	for(int j=3;j<=sqrt(i);++j)
	 if(i%j==0) return false;
	return true;
}
int main()
{
	int m;
	scanf("%d",&m); 
	int a[9];
	int i;
	int k=pow(10,m-1)+1;
	int j=pow(10,m)+1;
	for(k=pow(10,m-1)+1;k<j;k+=2)
	{
		if(sushu(k))
		{
			for(i=1;i<=m;++i)
			{
				a[i]=k/pow(10,m-i);
			    if(!sushu(a[i]))
			     break;
			}
		}
		if(i>m)
		printf("%d ",k);
	}
}
