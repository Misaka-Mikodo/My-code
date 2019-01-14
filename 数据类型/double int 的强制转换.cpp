#include <stdio.h>
void printBinary(int num)
{    
    // sizeof(num)<<3 --相当于-- sizeof(num)*8
    int cnt=(sizeof(num)<<3)-1;
    for(int i=cnt;i>=0;i--)
    {
        // num>>i --相当于-- num/2^i(2的i次方)
        //此例中的位移只是为了进行位与运算(&)得到最低位的值
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
int main()
{
	double x=123828749.66;
	int y=x;
	printf("%d\n",y);
	printf("%lf\n",y);
	printBinary(y); 
} 
