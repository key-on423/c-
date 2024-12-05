//#include <iostream>
//using namespace std;
//
//class Point	
//{
//public:
//	Point(float a = 0, float b = 0) { x = a; y = b; }                     
//   ~Point() { cout << "executing Point destructor" << endl; }   
//   // virtual ~Point() { cout << "executing Point destructor" << endl; } 第三步调试条件
//protected:
//	float x, y;
//};
//class Circle :public Point          
//{
//public:
//	Circle(float a = 0, float b = 0, float r = 0) :Point(a, b), radius(r) {}                      
//	~Circle() { cout << "executing Circle destructor" << endl; }
//protected:
//	float radius;
//};
//int main()
//{
//	Point* p = new Circle;             
//	delete p;                        
//	cout << "text two:" << endl;
//	Circle* p2 = new Circle;
//	delete p2;
//	return 0;
//}
//1）把构造函数修改为带参数的函数，在建立对象时初始化。
//2）在main函数中另设一个指向Circle类对象的指针变量，使它指向堆内存中的Circle对象。运行程序，分析结果。
//3）不作第2）点的修改而将析构函数声明为virtual，运行程序，分析结果



//声明抽象基类Shape，由它派生出3个派生类：Circle（圆形）、Rectangle（矩形）、Triangle（三角形），
//用一个函数printArea分别输出以上三者的面积，3个图形的数据在定义对象时给定，要求体现多态性。


//#include <iostream>
//using namespace std;
//
//
//class Shape
//{
//public:
//	virtual float are() const { return 0.0; }
//	virtual void printArea()const = 0;
//};
//
//class Circle:public Shape
//{
//public:
//	Circle(float a=0, float b=0, float r=3)
//	{
//		x = a; y = b; round = r;
//	}
//	virtual float are() const;
//	virtual void printArea() const;
//private:
//	float x, y, round;
//};
//float Circle::are() const
//{
//	return 3.14 * round * round;
//}
//void Circle::printArea() const
//{
//	cout << "此类型为圆形，面积为" << are() <<" 半径为:" <<round<< endl;
//}
//class Rectangle :public Shape
//{
//public:
//	Rectangle(float a=3, float b=3)
//	{
//		x = a; y = b;
//	}
//	float are() const;
//	virtual void printArea() const;
//private:
//	float x, y;
//};
//float Rectangle::are() const
//{
//	return x * y;
//}
//void Rectangle::printArea() const
//{
//	cout << "此类型为矩形，面积为" << are() <<" 长和宽分别为:" <<x<<" " << y << endl;
//}
//class Triangle :public Shape
//{
//public:
//	Triangle(float l=2, float h=3)
//	{
//		low = l; high = h;
//	}
//	float are() const;
//	virtual void printArea() const;
//private:
//	float high, low;
//};
//float Triangle::are() const
//{
//	return low * high;
//}
//void Triangle::printArea() const
//{
//	cout << "此类型为三角形，面积为" << are() <<" 底和高分别为:" <<low<<" " <<high<< endl;
//}
//
//int main()
//{
//	Circle t1(0,0,3);
//	Rectangle t2(10, 10);
//	Triangle t3(3, 5);
//	t1.printArea();
//	t2.printArea();
//	t3.printArea();
//
//}
//

#include <iostream>
#include <string>
using namespace std;
class Shape
{
public:
	virtual void display()const = 0;
	Shape(int a, string n, char s)
	{
		age = a;
		name = n;
		sex = s;
	}
protected:
	int age;
	string name;
	char sex;
};

class Student :public Shape
{
public:
	Student(int a=0, string n="", char s = ' ', int g = 0) :Shape(a, n, s)
	{
		grades = g;
	}
	void shuru()
	{
		cout << "请输入学生年龄:" << endl;
		cin >> age;
		cout << "请输入性别:" << endl;
		cin >> sex;
		cout << "请输入名字:" << endl;
		cin >> name;
		cout << "请输入成绩:" << endl;
		cin >> grades;
	}
	virtual void display()const;
protected:
	int grades;
};
void Student::display()const
{
	cout << "该学生姓名为:" << name << " 年龄为:" << age << " 性别为:" << sex << " 成绩为:" << grades << endl;
}
class Teacher :public Shape
{
public:
	Teacher(int a=0, string n="", char s = ' ', string kc = "", string xb = "", string zc = "") :Shape(a, n, s)
	{
		kechen = kc;
		xibu = xb;
		zhichen = zc;

	}
	void shuru()
	{
		cout << "请输入老师年龄:" << endl;
		cin >> age;
		cout << "请输入性别:" << endl;
		cin >> sex;
		cout << "请输入名字:" << endl;
		cin >> name;
		cout << "请输入所教课程:" << endl;
		cin >> kechen;
		cout << "请输入所在系部:" << endl;
		cin >> xibu;
		cout << "请输入职称:" << endl;
		cin >> zhichen;
	}
	virtual void display()const;
protected:
	string kechen;
	string xibu;
	string zhichen;
};
void Teacher::display()const
{
	cout << "该老师姓名为:" << name << " 年龄为:" << age << " 性别为:" << sex << " 所教课程为:" << kechen <<
		" 系部为:" << xibu << " 职称为:" << zhichen << endl;
}
class Xinzhen : public Shape
{
public:
	Xinzhen(int a=0, string n="", char s=' ', string zc="", char lev=' ') :Shape(a, n, s)
	{
		age = a; name = n; sex = s; zhichen = zc; level = lev;
	}
	void shuru()
	{
		cout << "请输入行政人员年龄:" << endl;
		cin >> age;
		cout << "请输入性别:" << endl;
		cin >> sex;
		cout << "请输入名字:" << endl;
		cin >> name;
		cout << "请输入职称:" << endl;
		cin >> zhichen;
		cout << "请输入业绩评级:" << endl;
		cin >> level;
	}
	virtual void display()const;
protected:
	string zhichen;
	char level;
};
void Xinzhen::display()const
{
	cout << "该行政人员姓名为:" << name << " 年龄为:" << age << " 性别为:" << sex << " 职称为:" << zhichen << " 业绩评级为:"
		<< level << endl;;
}

int main()
{
	Student t1(18, "张三", 'M', 98);
	t1.display();
	Teacher t2(28, "李四", 'M', "C++", "计算机学院", "教授");
	t2.display();
	Xinzhen t3(33, "张琪琪", 'W', "计科院长", 'A');
	t3.display();
	Student t4;
	t4.shuru();
	t4.display();
	/*Teacher t5;
	t5.shuru();
	t5.display();
	*/
	Xinzhen t6;
	t6.shuru();
	t6.display();
	

}
//3、多态性在学校人员信息管理系统中应用。
//系统描述：
//学校人员信息管理系统的主要功能是对在校人员的信息资料进行管理。
//在校人员包括学生、教师和行政人员。各系将学生的基本资料如姓名、性别、年龄等及课程成绩输入到系统。
//教师除了具有学生一样的基本资料（姓名、性别、年龄）外，还需要记录一些与教学工作相关的信息，
//如所教课程、所属系部、当前职称等，并希望能够计算每个教师课时工作量。
// 同样行政人员除了具有学生一样的基本资料
//（姓名、性别、年龄）外，还有职务，业绩评级等。
//系统能够随时输入、显示和查询各类人员的相关信息。



