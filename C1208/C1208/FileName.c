#include <stdio.h>
//斐波那契数列
int fan(int x)
{
	if (x ==1)
	{
		return 0;
	}
	if (x == 2)
	{
		return 1;
	}
	else return fan(x - 1) + fan(x - 2);
}
int main()
{
	/*int x = 1;
	int y;
	printf("请输入y的值");
	scanf("%d", &y);
	printf("x+y=%d", x + y);*/
	int arr1[100];
	for (int i = 0; i < 20; i++)
	{
		arr1[i] = fan(i+1);
	}
	int w = 0;
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", arr1[i]);
		w += 1;
		if (w == 5)
		{
			printf("\n");
			w = 0;
		}

	}
	int y = fan(21);
	printf("%d", y);
}