#include <stdio.h>
#include <math.h>
#include <string.h>
int a[51];
int main()
{
	int n;
	int point,max=1; 
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	a[1]=1; 
	for(int i=1;i<=n;++i)
	{
		
		for(int j=1;j<=max;++j)
		 a[j]*=3;
		for(int j=1;j<=max;++j)
		 if(a[j]>9)
		 {
		 	int jw=a[j]/10;
		 	a[j]%=10;
		 	a[j+1]+=jw;
		 	if(j+1>max) max++;
		 }
	}
	for(int i=max;i>=1;--i)
	printf("%d",a[i]);
	printf("\n");
} 
