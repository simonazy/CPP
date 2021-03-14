#include<iostream>
using namespace std;
#include<string>
#include<ctime>

struct student {
	string name;
	int score;
};

struct Teacher {
	string name;
	student sArray[5];
};

void allocateSpace(Teacher tArray[], int len)
{
	string tName = "Teacher";
	string sName = "Student";

	string nameSeed = "ABCDE";

	for (int i = 0; i < len; i++)
	{
		tArray[i].name = tName + nameSeed[i];

		for (int j = 0; j < 5; j++) 
		{
			tArray[i].sArray[j].name = sName + nameSeed[j];
			tArray[i].sArray[j].score = rand() % 61 + 40;
		}
	}
}

void printTeachers(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << tArray[i].name << endl;
		
		for (int j = 0; j < 5; j++)
		{
			cout << "\tName: " << tArray[i].sArray[j].name << " score: " << tArray[i].sArray[j].score << endl;
		}
	}
}


int main() {
	srand((unsigned int)time(NULL));       //随机数种子 头文件 #include <ctime>

	Teacher tArray[3];                     //老师数组

	int len = sizeof(tArray) / sizeof(Teacher);

	allocateSpace(tArray, len); //创建数据
	
	printTeachers(tArray, len); //打印数据
	
	system("pause");
	return 0;
}