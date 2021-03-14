#include<iostream>
using namespace std;

#include<ctime>

int main()
{
	//添加随机数种子
	srand((unsigned int)time(NULL));
	
	//系统生成随机数
	int num = rand() % 100 + 1; //生成0+1~~99+1随机数

	//
	int val = 0;

	//
	while (true)
	{
		cin >> val;

		if (val > num)
		{
			cout << "too big" << endl;
		}
		else if (val < num)
		{
			cout << "too small" << endl;
		}
		else
		{
			cout << "bingo" << endl;
			break;
		}
	}
	
}