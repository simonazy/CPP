#include<iostream>
using namespace std;


int main() {
	//1.指针的定义
	int a = 10;

	//指针定义语法:数据类型*变量名;
	int* p;

	//指针变量赋值
	p = &a;
	cout << &a << endl;
	cout << p << endl;

	//2.指针的使用

	cout << "*p= " << p << endl;
	cout << "*p = " << *p << endl;

	system("Pause");
	return 0;
}
