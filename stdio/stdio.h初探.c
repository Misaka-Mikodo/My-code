#include <stdio.h>
int main()
{
	int s=30;
	int ss=-30;
	float a=0.0001;
	float b=0.00001;
	float c=100000;
	float d=1000000;
	printf("右对齐且域宽为6 %6d\n",s);
	printf("在%%和标识符之间加空格 % d% d\n",s,s);
	printf("左对齐且域宽为5 %-5d%d\n",s,s);
	printf("八进制输出 %o\n",s);
	printf("八进制标准输出 %#o\n",s);
	printf("十六进制输出 %x\n",s);
	printf("十六进制标准输出 %#x\n",s);
	printf("g根据精度来决定表达方式 %g  %g  %g  %g\n",a,b,c,d);
	printf("e的表示情况%e  %.1e  %e  %e\n",a,b,c,d);
	printf("f的表示情况%f  %.9f  %f  %f\n",a,b,c,d);
	printf("%d  %d\n\n",s,s);
	char l[11];
	//scanf("%2[abcd]",l);
	//printf("%s",l); 
	int day,m,y;
	scanf("%d%*c%d%*c%d",&day,&m,&y);
	printf("%d %d %d",day,m,y); 
}
