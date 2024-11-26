#include <iostream>
using namespace std;

class Student
{
public:
	
	Student(int n, int g);
		int num;
	    int grades;
};

Student::Student(int n, int g)
{
	num = n;
	grades = g;
}
void max(Student* pt, int size)
{
	int max1 = 0;
	for (int i = 0; i < size; i++)
	{
		if (pt[i].grades > pt[max1].grades)
			max1 = i;
	}

	cout << "学号为:" << pt[max1].num << " 的学生成绩最高，分数为：" << pt[max1].grades;
}
int main()

{
	Student* pt;
	Student arr[5] = {
		Student(1,85),
		Student(2,91),
		Student(3,78),
		Student(4,66),
		Student(5,47)
	};
	pt = &arr[0];
	max(pt, 5);

	return 0;
}