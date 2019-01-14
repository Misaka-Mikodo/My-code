    #include <stdio.h>
    void foo(const int *);
    int main()
    {
        const int i = 10;
        printf("%d ", i);
        foo(&i);
        printf("%d", i);
 
    }
    void foo(const int *i)
    {
        i = 20;
    }
