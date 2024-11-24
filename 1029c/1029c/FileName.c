#include <stdio.h>

int main()
{
	int x = 10;
	int* p = x;
	int* y = x;
	int* z = &x;
	printf("%d %d %d", p,y,z);
}