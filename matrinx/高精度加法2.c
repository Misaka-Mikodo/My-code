#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
#define MAXl (100+1)
 
int main() {
    short s1[MAXl], s2[MAXl];
    int l1, l2, i;
    scanf("%d", &l1);
    for (i = 0; i < l1; ++i)
        scanf("%hd", s1+i);
    scanf("%d", &l2);
    for (i = 0; i < l2; ++i)
        scanf("%hd", s2+i);
    s1[l1] = s2[l2] = -1;
    short *plus(short *, short *);
    short *ans = plus(s1, s2);
    for (i = 0; s1[i] >= 0; ++i)
        printf("%hd", s1[i]);
    printf("\n");
    for (i = 0; s2[i] >= 0; ++i)
        printf("%hd", s2[i]);
    printf("\n");
    for (i = 0; ans[i] >= 0; ++i)
        printf("%hd", ans[i]);
    printf("\n");
    free(ans);
    return 0;
}
short * plus(short *a, short *b)
{
	short *sum=(short *)malloc(sizeof(short) * 101) ;
	int i;
	for(i=0;i<101;++i) sum[i]=0;
	int a1=0,b1=0;
	i=0;
	while(a[++a1]!=-1);
	while(b[++b1]!=-1);
	int max=a1>b1?a1:b1;
	int min=a1>b1?b1:a1;
	int ll=0;
	for(i=0;i<a1&&i<b1;++i)
	{
		sum[max-i-1]+=a[a1-i-1]+b[b1-i-1];
		if(sum[max-i-1]>9)
		{
			sum[max-i-1]-=10;
			if(max-i-2<0) ll+=1;
			else sum[max-i-2]+=1;
		}
	}
	
	for(i=min;i<max;++i)
	{
		if(a1>b1)
		sum[max-i-1]+=a[a1-i-1];
		else
		sum[max-i-1]+=b[b1-i-1];
		if(sum[max-i-1]>9)
		{
			sum[max-i-1]-=10;
			if(max-i-2<0) ll+=1;
			else sum[max-i-2]+=1;
		}
	}
	if(ll!=0)
	{
		for(i=max;i>=1;--i) 
		sum[i+1]=sum[i];
		sum[0]+=ll;
	}
	if(ll!=0) sum[max+1]=-1;
	else  sum[max]=-1;
	return sum;
}
