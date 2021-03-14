#include<iostream>
using namespace std;

int main()
{
	int num = 100;

	do {
		int a = 0;
		int b = 0;
		int c = 0;

		a = num % 10;//个位
		b = num / 10 % 10;//十位
		c = num / 100; //百位

		if (a * a * a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
}