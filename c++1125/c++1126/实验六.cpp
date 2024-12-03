#include <iostream>
using namespace std;
//1．	编一个使用派生类的程序，设计一个包含圆和圆柱的几何尺寸的类，它用内部数据建立几何形状并显示它们的尺寸、面积和体积。
//class ruan
//{
//public:
//	ruan(double b)
//	{
//		banjin = b;
//	}
//	void show1()
//	{
//		cout << "半径为:" << banjin;
//		cout << "圆的面积为:" << banjin * banjin * 3.14 << endl;
//		cout << "圆的周长为:" << 3.14 * banjin * 2 << endl;
//	}
//protected:
//	double banjin;
//};
//class ruanzhu :public ruan
//{
//public:
//	
//	ruanzhu(double b, double h):ruan(b)
//	{
//		high = h;
//	}
//	void show2()
//	{
//		cout << "半径为:" << banjin;
//		cout << "圆的面积为:" << banjin * banjin * 3.14 << endl;
//		cout << "圆的周长为:" << 3.14 * banjin * 2 << endl;
//		cout << "当它的高为:" << high << "时圆柱体积为:" << banjin * banjin * 3.14 * high << endl;
//	}
//private:
//	double high;
//};
//int main()
//{
//	ruanzhu t1(3, 5);
//	t1.show2();
//	return 0;
//}

//2．定义一个存折类，并派生出信用卡类，存折类可以实现开户、存款、取款和查询余额的操作，取款金额必须小于余额，
//信用卡类对取款操作进行修改，允许透支一定金额。模拟5个人到银行进行存折操作，其中有两个人还进行信用卡交易的过程
////试编写一个完整的程序。
//class cunzhe
//{
//public:
//	cunzhe(int n ,int y)
//	{
//		name = n;
//		yue = y;
//		cout << "开户账号为:" << name << endl;
//	}
//	void cq(int x)
//	{
//		cout << "存入" << x << "元" << endl;
//		yue += x;
//	}
//
//	void nq(int x)
//	{
//		if (x <= yue)
//		{
//			cout << "取出" << x << "元" << endl;
//			yue -= x;
//		}
//		else
//			cout << "余额不足" << endl;
//	}
//	void show()
//	{
//		cout <<"余额为：" << yue<<endl;
//	}
//protected:
//	int name;
//	int yue;
//};
//class xinyongka:public cunzhe
//{
//public:
//	xinyongka(int n, int y, int t=0) :cunzhe(n, y)
//	{
//		cout << "信用卡账号：@" << n;
//		touzhi = t;
//	}
//	void nq1(int x)
//	{
//		if (x <= yue)
//		{
//			cout << "取出" << x << "元" << endl;
//			yue -= x;
//		}
//		else
//		{
//			cout << "取出" << x << "元" << endl;
//			cout << "余额不足进行透支操作" << endl;
//			yue -= x;
//			touzhi = -yue;
//			cout << " 透支了" << touzhi<<"元"<<endl;
//		}
//
//	}
//	void show2()
//	{
//		cout << "余额为：" << yue << endl;
//		cout << "透支了:" << touzhi << endl;
//	}
//private:
//	int touzhi;
//};
//int main()
//{
//	cunzhe t1(101, 50);
//	t1.show();
//	t1.cq(100);
//	t1.show();
//	cunzhe t2(102, 80);
//	t2.show();
//	t2.cq(20);
//	t2.show();
//	cunzhe t3(103, 300);
//	t3.show();
//	t3.nq(100);
//	t3.show();
//	xinyongka s1(104, 300);
//	s1.show();
//	s1.nq1(400);
//	s1.show();
//	xinyongka s2(105, 500);
//	s2.show();
//	s2.nq1(400);
//	s2.show();
//}

//2．编写一个学生和教师的数据输入和显示程序。学生数据有编号、姓名、性别、年龄、系别和成绩，
//教师数据有编号、姓名、性别、年龄、职称和部门。要求将编号、姓名、性别、年龄的输入和显示设计成一个类Person，
//并作为学生类Student和教师类Teacher的虚基类，并在此基础上派生在职研究生（Graduate)派生类，
//在定义派生类对象时给出初始化数据，然后输出这些数据。
#include <string>
class Person
{
public:
	Person(int b, string n, char s, int a)
	{
		bianhao = b; name = n; sex = s; age = a;
	}
	void show1()
	{
		cout << "编号:" << bianhao << " 姓名:" << name << " 性别:" << sex << " 年龄:" << age << endl;
	}
protected:
	int bianhao;
	string name;
	char sex;
	int age;
};
class Student:virtual public Person
{
public:
	Student(int b, string n, char s, int a, string l, int g) :Person(b, n, s, a)
	{
		leibie = l;
		grades = g;
	}
	void show1()
	{
		cout << "学生类别:"<<leibie<<" 成绩:"<<grades << " 编号:" << bianhao << " 姓名:" << name <<
			" 性别:" << sex << " 年龄:" << age << endl;
	}
protected:
	string leibie;
	int grades;
};
class Teacher :virtual public Person
{
public:
	Teacher(int b, string n, char s, int a, string l, string g) :Person(b, n, s, a)
	{
		zhichen = l;
		bumen = g;
	}
	void show1()
	{
		cout << "职称:" << zhichen << " 部门:" << bumen << " 编号:" << bianhao << " 姓名:" << name <<
			" 性别:" << sex << " 年龄:" << age << endl;
	}
protected:
	string zhichen;
	string bumen;
};
int main()
{
	Person t1(110, "超哥", 'M', 30);
	t1.show1();
	cout << endl;
	Student t2(111, "李四", 'M', 23, "计算机", 587);
	t2.show1();
	cout << endl;
	Teacher t3(001, "王昭君", 'W', 27, "部长", "人文学院");
	t3.show1();
	return 0;
}