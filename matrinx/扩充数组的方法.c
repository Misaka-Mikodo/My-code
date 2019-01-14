#include<stdio.h>
#include<stdlib.h>
int main() {
        int *doubleCapacity(int *list, int size, int addSize);
        int m, n;
        scanf("%d", &m);
        scanf("%d", &n);
 
        int a[10];
        int i = 0;
        for (i = 0; i < m; i++)
                scanf("%d", &a[i]);
 
        int *newlist = doubleCapacity(a, m, n);
 
        for (i = 0; i < (m + n); i++)
                printf("%d ", newlist[i]);
        free(newlist);
        return 0;
}
int * doubleCapacity(int *list, int size, int addSize)

{
    int i;
	int a[size];
	 for(i=0;i<size;++i) a[i]=list[i];
	
   list= (int*)malloc(sizeof(int) * (size+addSize));
   for(i=0;i<size+addSize;++i) list[i]=0;
   for(i=0;i<size;++i) list[i]=a[i];
   return list;
}
