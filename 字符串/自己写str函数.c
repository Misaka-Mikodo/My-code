#include <stdio.h>
int myStrlen(char a[])
{
	int i=0;
  while(a[i++]!='\0');
  return i-1;      
}
int myStrcmp(char a[], char b[])
{
	int i=0;
  while(a[i]!='\0'&&b[i]!='\0')
  {
    if(a[i]>b[i]) return 1;
    else if(a[i]<b[i]) return -1;
    i++;
  }
  if(a[i]=='\0'&&b[i]=='\0')
    return 0;
  else if(a[i]=='\0') return -1;
   else return 1;
  
}
void myStrcpy(char des[], char src[]) {
    int i=0,j=0;
    while(des[i++]!='\0')
      des[i-1]=='\0';
    while(src[j]!=0)
      des[j]=src[j++];
    des[j]='\0';
     
}
int main()
{
	char a[11],b[11];
	scanf("%s%s",a,b);
	printf("%d\n",myStrlen(a));
	printf("%d\n",myStrcmp(a,b));
	myStrcpy(a,b);
	printf("%s",a);
}
