#include <stdio.h>
enum birds{
	SPARROW=8
};
enum animal{
	TIGER=3
};
int main()
{
	enum birds i;//=TIGER;    ���ɱ��� 
	//i=TIGER;//��birds��ö�ٱ�����ֵanimal�����  ���� 
	int u=i;
	u=TIGER;//���ͱ�����ֵö�ٱ��� 
	printf("%d",u);//i=0  u=3 
}
