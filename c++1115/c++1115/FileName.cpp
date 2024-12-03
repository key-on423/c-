#include<iostream>
#include<string>
using namespace std;
class nihao
{public:
	nihao();
	nihao(int a)
	{
		age = a;
		cout << "age=" << age<<endl;
	}
	~nihao()
	{
		cout << "hahage=" << age<<endl;
	}
	void show()
	{
		cout << age << endl;
	}
private:
	int age;
};
void swap(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

int main()
{
	int a[3] = { 1,2,3 };
	int* p = &a[0];
	cout << p[1];
	nihao ni(10);
		nihao ba(20);
		ni.show();
		ba.show();
	/*int a = 90;
	int b = 60;
	swap(a, b);
	cout << "a" << a << "b" << b;
	*/
}