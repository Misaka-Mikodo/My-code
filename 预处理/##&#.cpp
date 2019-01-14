#include<stdio.h>
#include<stdlib.h>
#define PRINT( n ) printf( "token" #n " = %d", game##n )
int main()
{

    int game9 = 99;
    PRINT(9);//在这里的##的作用是连接的作用，最后导致输出的变量是game9，而#的作用是就是把参数当作字符串代替；
    system("pause");
    return 0;
}


