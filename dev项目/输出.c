#include <stdio.h>
int m()
{
	extern  arr[];
    printf("%d",sizeof(arr[0]));
}
