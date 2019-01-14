#include <stdio.h>
struct card {
	int a;
	char b;
}a,b;
int main() {
	printf("%d",sizeof(a));
	printf("%d %p" ,a ,b);
}
