#include <iostream>

int main()
{
	int i = 0;
	while (i <= 5)
	{
		printf("i love you ");
		std::cout << "always\n";
		i++;
	}
	int x = 0, y = 0;
	std::cout << "请输入x的值";
	std::cin >> x;
	std::cout << "请输入y的值";
	scanf("%d", &y);
	std::cout << "x+y=" << x + y;


	return 0;
}