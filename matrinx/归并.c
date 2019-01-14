#include <stdio.h>
int a[101],b[101],n;
void sort(int l,int r)
{
	int m=(l+r)>>1;
	if(l==r) return;
	sort(l,m);
	sort(m+1,r);
	int i = l,j = m + 1 ,k = l;
	while(i <=m&&j <=r)
	{
		if(a[i]>a[j])
		{
			b[k++]=a[j++];
		} 
		else b[k++]=a[i++];
	}
	while(i <=m)
	  b[k++] = a[i++];
	while(j <=r)
	  b[k++] = a[j++];
	for(int i=l;i<=r;++i)
	  a[i]=b[i];
	for(int i=1;i<=n-1;++i)
	  printf("%d ",a[i]);
	printf("%d",a[n]);
    printf("\n");
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;++i)
	 scanf("%d",&a[i]);
	sort(1,n);
}
