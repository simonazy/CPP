#include<iostream>
using namespace std;

int main() {
	//1.创建数组
	int arr[5] = { 1,3,2,5,4 };
	cout << "BEFORE: " <<  endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	//2.实现逆置
	//2.1记录起始下标
	//2.2记录结束下标
	//2.3起始下标与结束下标的元素互换
	//2.4起始位置++ 结束位置--
	//2.5循环执行
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0])-1;
	
	while (start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
	cout << "After: " << endl;
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << endl;
	}
}
