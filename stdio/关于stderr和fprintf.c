#include <stdio.h>
int main()
{
	FILE *fp = stdout;
	stderr = fp;
	fprintf(stderr, "%s", "hello");
}
