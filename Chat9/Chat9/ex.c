#include <stdio.h>

int main()
{
	int a = 10;
	int* pa;
	pa = &a;
	int ary[] = { 1,2,3,4,5 };
	int* pary = ary;
	int i;

	printf("변수 a에 저장된 값 : %d\n", a);
	printf("변수 a의 주소 : %p\n", &a);
	printf("포인터 변수 pa에 저장된 값 : %p\n", pa);
	printf("변수 a에 저장된 값 : %d\n", *pa);
	for (i = 0; i < 5; i++)
	{
		printf("ary[5d] = %d\t\n", i, ary[i]);
		ary[i]++;
	}
	printf("\n");
	for (i = 0; i < 5; i++)
	{
		printf("ary[%d] = %d\t\n", i, pary[i]);
	}

	return 0;
}