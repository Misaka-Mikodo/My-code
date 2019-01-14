#include <iostream>  
using namespace std;  
  
int main()  
{  
    enum egg {a,b=2,c};  
    enum egg test; //在这里你可以简写成egg test; 
  
     test = c; //对枚举变量test进行赋予元素操作，这里之所以叫赋元素操作不叫赋值操作就是为了让大家明白枚举变量是不能直接赋予算数值的，例如(test=1;)这样的操作都是不被编译器所接受的，正确的方式是先进行强制类型转换例如(test = (enum egg) 0;)！ 
  
    if (test==c)  
     {  
        cout <<"枚举变量判断:test枚举对应的枚举元素是c" << endl;  
     }  
  
    if (test==2)  
     {  
        cout <<"枚举变量判断:test枚举元素的值是2" << endl;  
     }  
  
    cout << a << "|" << b << "|" << test <<endl;  
  
     test = (enum egg) 0; //强制类型转换 
    cout << "枚举变量test值改变为:" << test <<endl;  
    cin.get();  
}
