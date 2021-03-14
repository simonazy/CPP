#include<iostream>
using namespace std;

int main() {

	int arr[5] = { 300,350,200,400,250 }; 

	//访问数组中的每个元素,如果比我认定的最大值大,更新最大值

	int max = 0;        //先认定一个最大值
	for (int i = 0;i < 5; i++) {
	
		//cout<<arr[i]<<endl;
	
		//判断, 更新
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}

	//结束循环 打印最大值

	cout << "The biggest number " << max << endl;
}