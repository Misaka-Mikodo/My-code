#include <stdio.h>
#include <string.h>
int main()
{
	int n,a,i=0,j,num=0,b[1001]={0};	
	scanf("%d",&n);
	int n1=n,temp;

	while(n1--)
	{
		scanf("%d",&a);
		for(i=0;i<num;++i)
		 if(a==b[i]) break;
		if(i==num) b[num++]=a;
	}
	for(i=0;i<num;++i)
	 for(j=i+1;j<num;++j)
	  if(b[i]>b[j])
	  {
	  	temp=b[i];
	  	b[i]=b[j];
	  	b[j]=temp;
	  }
	printf("%d\n",num);
	for(i=0;i<num;++i)
	 printf("%d ",b[i]);
} 
