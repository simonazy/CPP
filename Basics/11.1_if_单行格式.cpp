#include<iostream>
using namespace std;



int main() {
	
	int score = 0;
	cout << "Please type a score: " << endl;
	cin >> score;

	cout << "Your score is: " << score << endl;

	//if 语句
	if (score > 60) 
	{
		cout << "You passed the test. " << endl; 
	}

	system("Pause");

	return 0;
}
