#include<stdio.h>
#include<stdlib.h>
#define PRINT( n ) printf( "token" #n " = %d", game##n )
int main()
{

    int game9 = 99;
    PRINT(9);//�������##�����������ӵ����ã����������ı�����game9����#�������Ǿ��ǰѲ��������ַ������棻
    system("pause");
    return 0;
}


