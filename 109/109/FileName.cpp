#include <iostream>
int main()
{
	std::cout <</*"*/"/*"/**/;
	int x = 0;
std::cout << "hello" << std::endl;
std::cout << "请输入x的值：";
std::cin >>x;
std::cout << "x的值为：" << x << std::endl;
int y = 0, z = 0;
std::cout << "请再次输入y和z的值";
std::cin >> y >> z;
std::cout << "y= " << y << " z= " << z << " y+z=" << y + z;
return 0;
}