#include <stdio.h>
int main()
{
	int a[10];
	int i=0;
	while(scanf("%d",a[i])==1)//当输入的是整型数据时
     i++;
	for(int j=0;j<i;++j)
	printf("%d ",a[j]);
	
}

