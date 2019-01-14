#include <stdio.h>
int pow(int a,int b){	int sum=1;	for(int i=1;i<=b;++i) sum*=a;	return sum;}

int main()
{
	int n;
	int sum;
	
	scanf("%d",&n);
	for(int i=pow(10,n-1);i<pow(10,n);++i)
	{	sum=0;
		int a=i;
		while(a)
		{
			sum+=pow(a%10,n);
			a/=10;
		}
		if(i==sum)
		printf("%d\n",i);
	
	}
}
