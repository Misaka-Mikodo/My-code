#include <stdio.h>
#include <stdlib.h>
int n=3;
int *newl()
{
	int *a=(int *)malloc(sizeof(int) * n);
}
void stack_destructor(int *stack)
{
	free(stack);
}
int main()
{
	
	int *p=newl();
	int *q=newl();
	int i;
	for(i=0;i<n;++i) 
	 scanf("%d",&p[i]);
	for(i=0;i<n;++i) 
	 printf("%d",p[i]);
	stack_destructor(p);
	stack_destructor(q);
} 
