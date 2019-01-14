#include <stdio.h>
int main()
{
	int a[12];
	 for(int i=1;i<=10;++i)
	   scanf("%d",&a[i]);
	   int i;
	for(i=2;i<=10;++i)
	 for(int j=1;j<i;++j)
	 {
	 	if(a[i]<a[j])
	 	{
	 		int temp=a[i];
	 		a[i]=a[j];
	 		a[j]=temp;
	 	}
	 } 
	 for(int i=1;i<=10;++i)
	  printf("%d ",a[i]);
	  printf("\n");
}
