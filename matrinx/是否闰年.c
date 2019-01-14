#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		int y;
		scanf("%d",&y);
		if(y%100==0)
		 if(y%400==0) printf("%d leap year\n",n);
		 else printf("%d common year\n",n);
		else if(y%4==0) printf("%d leap year\n",n);
		     else printf("%d common year\n",n);
	}
}
