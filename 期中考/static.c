#include <stdio.h>
int k = 0;
void display(){
printf("%d ",k++);
}
int main(){
int i;
static int k = 10;
for (i = 0; i < 5; i++)
display ();
printf("\n");
return 0;
}
