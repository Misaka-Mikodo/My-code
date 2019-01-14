#include <stdio.h>
enum birds{
	SPARROW=8
};
enum animal{
	TIGER=3
};
int main()
{
	enum birds i;//=TIGER;    依旧报错 
	//i=TIGER;//把birds的枚举变量赋值animal定义的  报错 
	int u=i;
	u=TIGER;//整型变量赋值枚举变量 
	printf("%d",u);//i=0  u=3 
}
