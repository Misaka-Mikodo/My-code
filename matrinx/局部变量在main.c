   #include <stdio.h>
    int *f();
    int max( );
    int main()
    {
        int *p = f();
        int i, o;
        scanf("%d %d", &i, &o);
        int maxx = max(i,o);
        printf("%d", *p, *p, *p);
    }
    int max(int a,int b)
	{
    	return a > b ? a : b;
    }
    int *f()
    {
        int j = 10;
        return &j;
    }
