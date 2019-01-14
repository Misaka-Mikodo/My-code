#include <stdio.h> 
#include <math.h>
int main()
{
	for(int i=2992;i<=9999;++i)
	{
		int sum=0,sum1=0,sum2=0;
		int n=i;
		int n1=n,n2=n;
		int j=3;
		while(n1)
		{
			int temp=pow(10,j);
			sum1+=n1/temp;
			n1%=temp;
			j--;
		}
		j=3;
		while(n2)
		{
			int temp=pow(12,j);
			sum+=n2/temp;
			n2%=temp;
			j--;
		}
		if(sum1==sum)
		{
		j=3;
			while(n)
		{
			int temp=pow(16,j);
			sum2+=n/temp;
			n%=temp;
			j--;
		}
		    if(sum1==sum2)
		    printf("%d\n",i);
		}
	}
}
