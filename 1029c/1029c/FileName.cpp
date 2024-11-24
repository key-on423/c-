#include <iostream>

int main()
{
	int x = 10;
	int* p;
	int* z = &x;
	int& y = x;
	//int* w = x; 错误表达
	p = &x;
	std::cout << p<<'\n';
	std::cout << *p << '\n';//需要解引用
	std::cout << z<<'\n';//需要解引用
	std::cout << y;//不需要
}