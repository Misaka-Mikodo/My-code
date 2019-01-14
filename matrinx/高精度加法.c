#include <stdio.h>
int main() {
  char lhs[8] = {}, rhs[8] = {}, sum[10] = {};
  scanf("%s %s", lhs, rhs);
  add(lhs, rhs, sum);
  printf("%s\n", sum);
  return 0;
}
void add(char a[], char b[], char c[])
{
		char ll='0';
	int al=0,bl=0;
	while(a[++al]!='\0');//zy
	while(b[++bl]!='\0');
	int max=al>bl? al:bl;
	int min=al>bl? bl:al;
	int i=0;
	while(i<min)
	{
		c[max-i-1]+=a[al-i-1]-'0'+b[bl-i-1]-'0'+'0';
		if(c[max-i-1]>'9') 
		{
			c[max-i-1]-=10;
			if(max-i-2<0) ll+=1;
			 else c[max-i-2]+=1;
		}
		i++;
	}
	i=0;

	for(i=min;i<max;++i) 
	{
		if(al>bl)//判断哪个长 
	    c[max-i-1]+=a[al-i-1];
	    else c[max-i-1]+=b[bl-i-1];
		if(c[max-i-1]>'9') 
		{
			c[max-i-1]-=10;
			if(max-i-2<0) ll+=1;
			 else c[max-i-2]+=1;
		}
	}
	c[max]='\0';
	if(ll!='0') printf("%c",ll);//有一位进位会溢出，故用一位储存 
	
}
