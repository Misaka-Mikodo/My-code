#include <iostream>  
using namespace std;  
  
int main()  
{  
    enum egg {a,b=2,c};  
    enum egg test; //����������Լ�д��egg test; 
  
     test = c; //��ö�ٱ���test���и���Ԫ�ز���������֮���Խи�Ԫ�ز������и�ֵ��������Ϊ���ô������ö�ٱ����ǲ���ֱ�Ӹ�������ֵ�ģ�����(test=1;)�����Ĳ������ǲ��������������ܵģ���ȷ�ķ�ʽ���Ƚ���ǿ������ת������(test = (enum egg) 0;)�� 
  
    if (test==c)  
     {  
        cout <<"ö�ٱ����ж�:testö�ٶ�Ӧ��ö��Ԫ����c" << endl;  
     }  
  
    if (test==2)  
     {  
        cout <<"ö�ٱ����ж�:testö��Ԫ�ص�ֵ��2" << endl;  
     }  
  
    cout << a << "|" << b << "|" << test <<endl;  
  
     test = (enum egg) 0; //ǿ������ת�� 
    cout << "ö�ٱ���testֵ�ı�Ϊ:" << test <<endl;  
    cin.get();  
}
