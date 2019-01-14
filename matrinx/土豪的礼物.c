#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
	int n,top=0;
	scanf("%d",&n);
	char a[21][101],b[21];
	for(int i=1;i<=n;++i)
	{
		int p;
		scanf("%d",&p);
		if(p==1)
		scanf("%s",a[++top]);
		else 
		{
			scanf("%s",b);
			printf("%s ",b);
			printf("%s\n",a[top--]);
		}
		
	} 
}
