#include <stdio.h>
#define Max 20
#define OK 1
#define Ture 1
#define Flause 0
#define Cuo 0
typedef int State;
typedef int yuansu;
typedef struct
{
	yuansu arr1[Max];
	int length;
} Liebiao;
//³õÊ¼»¯
State ChuShiHua( Liebiao* L)
{
	L->length = 0;
	return OK;
}
State Charu(Liebiao* L, int i,yuansu x)
{
	if (L->length == Max)
		return Cuo;
	if (i<1 || i>L->length + 1)
		return Cuo;
	if (i <= L->length)
	{
		for (int w = L->length - 1; w >= i - 1; w--)
		{
			L->arr1[w + 1] = L->arr1[w];
		}
		
	}
	L->arr1[i - 1] = x;
	L->length += 1;  
	return OK;
}

int main()
{
	Liebiao A = { {1,2,3,4,5,6,7,8},8};
	
	Liebiao* B;
	B = &A;
	/*ChuShiHua(&A);*/
	Charu(&A, 4, 8);
	printf("%d", A.arr1[3]);
}