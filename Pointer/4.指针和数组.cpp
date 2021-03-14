#include<iostream>
using namespace std;



int main() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	
	int* p = arr; //指向数组的指针

	cout << "第一个元素： " << arr[0] << endl;
	cout << "指针访问第一个元素： " << *p << endl;

	for (int i = 0; i < 10; i++) {
		cout << *p << endl;
		p++;
	}

	system("Pause");
	return 0;
}