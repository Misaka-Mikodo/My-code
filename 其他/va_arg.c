#include <stdio.h>
#include <stdarg.h>
int max(int ss,...)
{
	va_list ap;
	int ret = -9999, tmp;
	va_start(ap, ss);
	for(int i = 0; i < ss; i++){
		tmp = va_arg(ap, int);
		if(ret < tmp)
			ret = tmp;
	} 
	va_end(ap);
	return ret;
}
int main(){
	int a = 5;
	
	printf("%d",max(a, 1, 2, 3, 4, 2));
}
