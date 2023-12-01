#include<iostream>
using namespace std;

//1:宏常量
#define day 7

int main(){
    
    //变量
    int a = 10;
    //2：const修饰变量=常量
    const int b = 20;

    cout << "变量：" << a << endl;
    cout << "一周有" << day << "天" << endl;
    cout << "const修饰常量" << b << endl;

    return 0 ;

}