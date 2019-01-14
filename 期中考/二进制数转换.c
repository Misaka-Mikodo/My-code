#include <stdio.h>
#include <math.h>
int main()
{
	int num,a[8]={0};
	scanf("%d",&num);
	if(num>0)
	{
		for(int i=7;i>=0;--i)
		{
			a[i]=num%2;
			num/=2;
		}
	}
	else if(num==0) {
		printf("00000000\n");
		return 0; 
	}
	else if(num<0)
	{
		num=abs(num);
		for(int i=7;i>=0;--i)
		{
			if(a[i]=num%2)
			 a[i]=0;
			else a[i]=1;
			num/=2;
		}
		a[7]++;
		for(int i=7;i>=0;--i)
		 if(a[i]==2)
		 {
		 	a[i]=0;
		 	a[i-1]++;
		 }
	}
	for(int i=0;i<=7;++i) printf("%d",a[i]);
	printf("\n"); 
}
