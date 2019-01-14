#include <stdio.h>
#include <stdlib.h>
void print(int num,int *a)
{
	int i;
	for(i=0;i<num;++i)
	 printf("%d ",a[i]);
	printf("\n");
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	while(n--)
	{
		int num;
		scanf("%d",&num);
		int *a;
		a=(int *)malloc(sizeof(int) * num);
		for(i=0;i<num;++i)
		  scanf("%d",&a[i]);
		for(i=0;i<num;++i)
		{
			int ptr=0;
			for(j=0;j<num-i-1;++j)
			{
				if(a[j]>a[j+1])
				{
					if(!ptr) ptr=1;
					int tmp=a[j];
					a[j]=a[j+1];
					a[j+1]=tmp;
				}
				print(num,a);
			}
			if(!ptr) break; 
		}
		free(a);	
	}
} 
