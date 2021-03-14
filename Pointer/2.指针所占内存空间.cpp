#include<iostream>
using namespace std;


int main() {
	int a = 10;

	int* p;
	p = &a; //指针指向数据a的地址

	cout << *p << endl; //* 解引用
	cout << sizeof(p) << endl;  //4

	cout << sizeof(char*) << endl;   //4
	cout << sizeof(float*) << endl;  //4
	cout << sizeof(double*) << endl; //4


	system("Pause");
	return 0;
}

//总结：所有指针类型在32位操作系统下是4个字节
