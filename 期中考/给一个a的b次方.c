#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int quick_power(int a,int b,int p)//������ 
{
	int temp;
	if(b==0)
	{
		return a;
	}
	temp=quick_power(a,b>>1,p);//���ú����ĵݹ� 
	if(b&1)//��ʾbΪ���� 
		return temp*a%p;
	else 
	    return a*a%p;
} 
int main(int argc,char *argv[])
{
	int a,b,p;
	while(~scanf("%d%d%d",&a,&b,&p))
	{
		printf("%d\n",quick_power(a,b,p));
	}
}
