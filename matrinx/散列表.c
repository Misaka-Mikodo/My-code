#include <stdio.h>
int hashtable[26*26*26+10];
char s[100][5];//开始定义时是s[100]报错
// invalid conversion from 'char' to 'char*' [-fpermissive]
//原因就是第一维要存第几个，第二维是第几个里存几位数； 
int hash(char s[],int len)//第二维被省略了 
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
		scanf("%s",s[j]);//省略了第二维？ 
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
