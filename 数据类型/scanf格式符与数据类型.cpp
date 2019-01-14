#include <stdio.h>
void printBinary(int);
int main()
{
	float x;
	int y;
	scanf("%f %f",&x,&y);
	printf("%f %d\n",x,y);
	printBinary(y); 
}
void printBinary(int num)
{    
    // sizeof(num)<<3 --�൱��-- sizeof(num)*8
    int cnt=(sizeof(num)<<3)-1;
    for(int i=cnt;i>=0;i--)
    {
        // num>>i --�൱��-- num/2^i(2��i�η�)
        //�����е�λ��ֻ��Ϊ�˽���λ������(&)�õ����λ��ֵ
        int temp=num>>i;
        int b=temp&1;
        printf("%d",b);

        if(i%4==0)
        {
            printf("  ");
        }
    }
    printf("\n");
}

