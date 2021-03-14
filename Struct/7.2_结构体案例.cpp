#include<iostream>
using namespace std;
#include<string>


struct hero
{
	string name;
	int age;
	string sex;
};


void bubbleSort(hero arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) 
		{
			if (arr[j].age > arr[j+1].age) 
			{
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}


void printHeros(hero arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "Name: " << arr[i].name << " sex:  " << arr[i].sex << " Age: "
			<< arr[i].age << endl;
	}
}




int main() {
	struct hero arr[5] =
	{
		{"Jerry",23,"male"},
		{"Bob",22,"male"},
		{"Tom",20,"male"},
		{"Tina",21,"female"},
		{"Anna",19,"female"},
	};

	int len = sizeof(arr) / sizeof(hero); //获取数组元素个数

	bubbleSort(arr, len); //排序

	printHeros(arr, len); //打印

	system("pause");
	return 0;
}