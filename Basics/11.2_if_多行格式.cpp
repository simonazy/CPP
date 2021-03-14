#include<iostream>
using namespace std;



int main() {
	int score = 0;

	cout << "please type your score: " << endl;
	cin >> score;
	
	if (score > 60)
	{
		cout << "Congratulations!" << endl;
	}
	else
	{
		cout << "Sorry~" << endl;
	}

	system("pause");
	return 0;
}