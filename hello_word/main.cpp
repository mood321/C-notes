#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    //基本类型
bool b=true;
cout << sizeof(b) << endl;
string str="String " ;
cout << str << endl;


// 数字定义
   short  s;
   int    i;
   long   l;
   float  f;
   double d;

   // 数字赋值
   s = 10;
   i = 1000;
   l = 1000000;
   f = 230.47;
   d = 30949.374;


      // 生成实际的随机数
       int j= rand();
        cout << "随机数： " << j << endl;

        int n[ 10 ]; // n 是一个包含 10 个整数的数组

           // 初始化数组元素
           for ( int i = 0; i < 10; i++ )
           {
              n[ i ] = i + 100; // 设置元素 i 为 i + 100
           }

           // 输出数组中每个元素的值
           for ( int j = 0; j < 10; j++ )
           {
              cout <<   n[ j ] << endl;
           }
           //指针
           int  var1;
              char var2[10];

              cout << "var1 变量的地址： ";
              cout << &var1 << endl;

              cout << "var2 变量的地址： ";
              cout << &var2 << endl;

            int result=max(43,3);
        cout << result << endl;
    return 0;
}



int max(int a,int b){

    if(a-b>0){
     return a;
    }
    return b;


}
