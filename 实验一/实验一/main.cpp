#include<iostream>
#include <string>
#include "Student.h"
using namespace std;
using std::string;
class student
{
public:
	student(int n, string mz, char s)
	{
		num = n;
		name = mz;
		sex = s;
		cout << "construct called" << endl;
	}
	~student()
	{
		cout << "destruct called" << endl;
	}
	void display()
	{
		cout << "num:" << num << endl;
		cout << "name:" << name << endl;
		cout << "sex:" << sex << endl;

	}
private:
	int num;
	char sex;
	string name;
};
int main()
{
	student stud(18,"小明",'M');
	stud.display();
	student stud2(19, "小美", 'W');
	stud2.display();
	cout << "hello";
	return 0;
}