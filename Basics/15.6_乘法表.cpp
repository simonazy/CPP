#include<iostream>
using namespace std;

int main()
{
	//列数*行数 = 计算结果
	//列数<=当前行数
    
	for (int i = 1;i < 10; i++)
	{
		for (int j=1; j<=i; j++)
		{
			cout << j << "*" << i  << "=" << i * j << "  ";
		}
		cout << endl;
	}
	return 0;
}