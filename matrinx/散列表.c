#include <stdio.h>
int hashtable[26*26*26+10];
char s[100][5];//��ʼ����ʱ��s[100]����
// invalid conversion from 'char' to 'char*' [-fpermissive]
//ԭ����ǵ�һάҪ��ڼ������ڶ�ά�ǵڼ�����漸λ���� 
int hash(char s[],int len)//�ڶ�ά��ʡ���� 
{
	int id=0;
	while(len--)
	{
		id=id*26+(s[len]-'A');
	}
	return id;
}
int main()
{
	int n,m;
	scanf("%d",&n);
	int j=n;
	while(j--) 
	{
		scanf("%s",s[j]);//ʡ���˵ڶ�ά�� 
	    int id=hash(s[j],3);
	    hashtable[id]++;
	}
	scanf("%d",&m);
	int i=m;
	while(i--) 
	{
		char temp[4];
		scanf("%s",temp);
		int id=hash(temp,3);
		printf("%d",hashtable[id]);
	    
	}
}
