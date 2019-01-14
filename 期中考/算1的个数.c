#include <stdio.h>
int main()
{
	int i,n,j;
	scanf("%d", &n);
	while(n--)
	{
		scanf("%d",&i);
		int sum=i%2;
		while(i)
		{
			
			i/=2;sum+=i%2;
		}
		printf("%d\n",sum);
	}
}
