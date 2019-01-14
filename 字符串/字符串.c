#include <stdio.h>
#include <math.h>
int main()
{
	char a[101];
	int sum=0;
	scanf("%s",&a);int i,tt=0;
	char z;
	for(i=0;a[i]!='\0';++i)
	{
		if(a[i]<='9'&&a[i]>='1')
		{
			for(;a[i]!='\0'&&a[i]<='9'&&a[i]>='1';++i)
			 sum+=pow(10,tt++)*(a[i]-'0');
			 i--;
		}
		{
			if(sum!=0)
			{
				for(int j=1;j<=sum;++j)
			    printf("%c",z);
			    sum=0;
			    tt=0;
			}
			else{
				if(a[i+1]<='9'&&a[i+1]>='1')
				z=a[i];
				else printf("%c",a[i]);
			}
		} 
	} 
}
