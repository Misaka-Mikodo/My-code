
#include <stdio.h>
int a[1000001];
int main()
{
    int n,i,j,temp;
    scanf("%d",&n);
    int n1=n;
    while(n--) scanf("%d",&a[n]);
    for(i=0;i<n1;++i)
     for(j=i+1;j<n1;++j)
      if(a[i]>a[j])
      {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
      }
    for(i=0;i<n1;++i)
     printf("%d ",a[i]);
    return 0;
}
