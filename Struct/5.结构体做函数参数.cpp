#include<iostream>
using namespace std;
#include<string>

//函数声明
void printStudent(struct student stu);
void printStudent2(struct student* stu);

//学生结构体定义
struct student
{
	//成员列表
	string name;
	int age;
	int score;
};

int main()
{
	struct student stu = { "Tom", 18, 88 };

	//值传递
	printStudent(stu);

	//地址传递
	printStudent2(&stu);


	system("Pause");
	return 0;

}

//值传递
void printStudent(struct student stu)
{
	stu.age = 28;
	cout << "子函数中 姓名：" << stu.name << " 年龄： " << stu.age << " 分数：" << stu.score << endl;
}

//地址传递
void printStudent2(struct student* stu)
{
	stu->age = 28;
	cout << "子函数中 姓名：" << stu->name << " 年龄： " << stu->age << " 分数：" << stu->score << endl;

}
