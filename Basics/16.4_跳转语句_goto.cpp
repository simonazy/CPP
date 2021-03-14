#include<iostream>
using namespace std;

//在程序中不建议使用goto语句，以免造成程序流程混乱

int main() {

	cout << "1" << endl;
	goto FLAG;
	cout << "2" << endl;
	cout << "3" << endl;
	cout << "4" << endl;
	
	FLAG:

	cout << "5" << endl;
	system("pause");
	return 0;
}
