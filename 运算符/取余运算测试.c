#include <stdio.h>
int main()
{
	int a=-17,b=23,c=3,d=-4;
	printf("%d %% %d=%d\n",a,c,a%c);
	printf("%d %% %d=%d\n",a,d,a%d);
	printf("%d %% %d=%d\n",b,c,b%c);
	printf("%d %% %d=%d\n",b,d,b%d);
	printf("%d / %d=%d\n",b,d,b/d);
	printf("%d / %d=%d",a,d,a/d);
}
