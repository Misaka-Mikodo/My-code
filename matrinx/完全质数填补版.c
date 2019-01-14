#include <stdio.h>
#include <math.h>
int n;
int check(int x)
{
	int i;
	if(x==1)
	{
		return 0;
	}
	for(i=2;i<=sqrt(x);++i)
	 if(x%i==0)
	  return 0;
	 return 1; 
}
void solve (int x,int y)
{
	int i;
	if(y==0)
	{
		printf("%d\n",x);
		return;
	}
	for(i=1;i<=9;++i)
	{
		if(check(x*10+i))
		{
			solve(x*10+i,y-1); 
		}
	}
}
int main()
{
	int i,n;
	scanf("%d",&n);
	solve(0,n);
	return 0;
}
