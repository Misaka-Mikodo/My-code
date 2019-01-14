#include <stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
	int n1=n*n;
	int a[10][10],b[10][10];
		int i=0,j=0;	
	while(n1--)
	{
	    scanf("%d",&a[i][j++]);
		if(j==n) 
		{
			j=0;i++;
		}
		
	}
	n1=n*n;
	i=0,j=0;
	while(n1--)
	{   
	    scanf("%d",&b[i][j++]);
		if(j==n) 
		{
			j=0;i++;
		}
		
	}
	for(i=0;i<n;++i)
	{	

	   int sum=0;
	 	  for(int k=0;k<n;++k)
		   sum+=a[i][k]*b[k][0];
		   printf("%d",sum);
		for(j=1;j<n;++j)
	   { 
	      int sum=0;
	 	  for(int k=0;k<n;++k)
		   sum+=a[i][k]*b[k][j];
		  printf(" %d",sum);
	   }
	   printf("\n");
	} 
	
}
}
