#include <stdio.h>
int main()
{
	int s=30;
	int ss=-30;
	float a=0.0001;
	float b=0.00001;
	float c=100000;
	float d=1000000;
	printf("�Ҷ��������Ϊ6 %6d\n",s);
	printf("��%%�ͱ�ʶ��֮��ӿո� % d% d\n",s,s);
	printf("����������Ϊ5 %-5d%d\n",s,s);
	printf("�˽������ %o\n",s);
	printf("�˽��Ʊ�׼��� %#o\n",s);
	printf("ʮ��������� %x\n",s);
	printf("ʮ�����Ʊ�׼��� %#x\n",s);
	printf("g���ݾ�����������﷽ʽ %g  %g  %g  %g\n",a,b,c,d);
	printf("e�ı�ʾ���%e  %.1e  %e  %e\n",a,b,c,d);
	printf("f�ı�ʾ���%f  %.9f  %f  %f\n",a,b,c,d);
	printf("%d  %d\n\n",s,s);
	char l[11];
	//scanf("%2[abcd]",l);
	//printf("%s",l); 
	int day,m,y;
	scanf("%d%*c%d%*c%d",&day,&m,&y);
	printf("%d %d %d",day,m,y); 
}
