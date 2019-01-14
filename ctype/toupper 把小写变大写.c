#include <stdio.h>
#include <ctype.h>  
int main()
{
	char a[11];int i=0,point=1;
	scanf("%s",&a);
	while(a[i]!='\0')
	{
		if(a[i]=='*')
		point=!point;
		else if(point)
		     {
		     	a[i]=toupper(a[i]);
		     }
		     else 	a[i]=tolower(a[i]);
		i++;
	}
	printf("%s",a);
}
