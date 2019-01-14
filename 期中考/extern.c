#include <stdio.h>

int main()
{
	extern  x;//不能赋初值
	//int x=0;//前一句已经从外部引入一个x
	x=0; 
	printf("%d",x);//若后面没没定义x 会报错 
		
}
int x = 100;//不加int会报错，但仍然能运行出100 
