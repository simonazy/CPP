#include<iostream>
using namespace std;

int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	cout << "Input weight A: " << endl;
	cin >> num1;
	
	cout << "Input weigth B: " << endl;
	cin >> num2;

	cout << "Input weigth C: " << endl;
	cin >> num3;

	if (num1 > num2)
	{
		if (num1 > num3)
		{
			cout << "Weight A " << num1 << endl;
		}
		else
		{
			cout << "Weight C " << num3 << endl;
		}
	}
	else
	{
		if (num2 > num3)
		{
			cout << "Weight B " << num2 << endl;
		}
		else
		{
			cout << "Weight C " << num3 << endl;
		}
	}
}
