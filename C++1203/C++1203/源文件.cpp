//#include <iostream>
//using namespace std;
//
//class Point	
//{
//public:
//	Point(float a = 0, float b = 0) { x = a; y = b; }                     
//   ~Point() { cout << "executing Point destructor" << endl; }   
//   // virtual ~Point() { cout << "executing Point destructor" << endl; } ��������������
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
//1���ѹ��캯���޸�Ϊ�������ĺ������ڽ�������ʱ��ʼ����
//2����main����������һ��ָ��Circle������ָ�������ʹ��ָ����ڴ��е�Circle�������г��򣬷��������
//3��������2������޸Ķ���������������Ϊvirtual�����г��򣬷������



//�����������Shape������������3�������ࣺCircle��Բ�Σ���Rectangle�����Σ���Triangle�������Σ���
//��һ������printArea�ֱ�����������ߵ������3��ͼ�ε������ڶ������ʱ������Ҫ�����ֶ�̬�ԡ�


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
//	cout << "������ΪԲ�Σ����Ϊ" << are() <<" �뾶Ϊ:" <<round<< endl;
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
//	cout << "������Ϊ���Σ����Ϊ" << are() <<" ���Ϳ�ֱ�Ϊ:" <<x<<" " << y << endl;
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
//	cout << "������Ϊ�����Σ����Ϊ" << are() <<" �׺͸߷ֱ�Ϊ:" <<low<<" " <<high<< endl;
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
		cout << "������ѧ������:" << endl;
		cin >> age;
		cout << "�������Ա�:" << endl;
		cin >> sex;
		cout << "����������:" << endl;
		cin >> name;
		cout << "������ɼ�:" << endl;
		cin >> grades;
	}
	virtual void display()const;
protected:
	int grades;
};
void Student::display()const
{
	cout << "��ѧ������Ϊ:" << name << " ����Ϊ:" << age << " �Ա�Ϊ:" << sex << " �ɼ�Ϊ:" << grades << endl;
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
		cout << "��������ʦ����:" << endl;
		cin >> age;
		cout << "�������Ա�:" << endl;
		cin >> sex;
		cout << "����������:" << endl;
		cin >> name;
		cout << "���������̿γ�:" << endl;
		cin >> kechen;
		cout << "����������ϵ��:" << endl;
		cin >> xibu;
		cout << "������ְ��:" << endl;
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
	cout << "����ʦ����Ϊ:" << name << " ����Ϊ:" << age << " �Ա�Ϊ:" << sex << " ���̿γ�Ϊ:" << kechen <<
		" ϵ��Ϊ:" << xibu << " ְ��Ϊ:" << zhichen << endl;
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
		cout << "������������Ա����:" << endl;
		cin >> age;
		cout << "�������Ա�:" << endl;
		cin >> sex;
		cout << "����������:" << endl;
		cin >> name;
		cout << "������ְ��:" << endl;
		cin >> zhichen;
		cout << "������ҵ������:" << endl;
		cin >> level;
	}
	virtual void display()const;
protected:
	string zhichen;
	char level;
};
void Xinzhen::display()const
{
	cout << "��������Ա����Ϊ:" << name << " ����Ϊ:" << age << " �Ա�Ϊ:" << sex << " ְ��Ϊ:" << zhichen << " ҵ������Ϊ:"
		<< level << endl;;
}

int main()
{
	Student t1(18, "����", 'M', 98);
	t1.display();
	Teacher t2(28, "����", 'M', "C++", "�����ѧԺ", "����");
	t2.display();
	Xinzhen t3(33, "������", 'W', "�ƿ�Ժ��", 'A');
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
//3����̬����ѧУ��Ա��Ϣ����ϵͳ��Ӧ�á�
//ϵͳ������
//ѧУ��Ա��Ϣ����ϵͳ����Ҫ�����Ƕ���У��Ա����Ϣ���Ͻ��й���
//��У��Ա����ѧ������ʦ��������Ա����ϵ��ѧ���Ļ����������������Ա�����ȼ��γ̳ɼ����뵽ϵͳ��
//��ʦ���˾���ѧ��һ���Ļ������ϣ��������Ա����䣩�⣬����Ҫ��¼һЩ���ѧ������ص���Ϣ��
//�����̿γ̡�����ϵ������ǰְ�Ƶȣ���ϣ���ܹ�����ÿ����ʦ��ʱ��������
// ͬ��������Ա���˾���ѧ��һ���Ļ�������
//���������Ա����䣩�⣬����ְ��ҵ�������ȡ�
//ϵͳ�ܹ���ʱ���롢��ʾ�Ͳ�ѯ������Ա�������Ϣ��



