#include <iostream>

int main()
{
	int x = 10;
	int* p;
	int* z = &x;
	int& y = x;
	//int* w = x; ������
	p = &x;
	std::cout << p<<'\n';
	std::cout << *p << '\n';//��Ҫ������
	std::cout << z<<'\n';//��Ҫ������
	std::cout << y;//����Ҫ
}