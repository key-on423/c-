#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int t = 1;
	int x = 0;
	for (int i = 1; i <= 100; i++)
	{
		t = 1;
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
				t = 0;
		}
		if (t != 0)
		{
			cout << i << ' ';
			x++;
		}
	}
	cout << '\n' << "1到100总共有" << x << "个素数" << endl;
	return 0;
}