
//swap.h文件
#include<iostream>
using namespace std;
//实现两个数字交换的函数声明
void swap(int a, int b);


//swap.cpp文件
#include "swap.h"
void swap(int a, int b)
{
int temp = a;
a = b;
b = temp;
cout << "a = " << a << endl;
cout << "b = " << b << endl;
}

//main函数文件
#include "swap.h"
int main() {
int a = 100;
int b = 200;
swap(a, b);
system("pause");
return 0;
}



