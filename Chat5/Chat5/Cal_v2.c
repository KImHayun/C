#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("덧셈할 두 정수를 입력하세요 : ");
	scanf("%d%d", &a, &b);
	printf("a+b 값 %d\n", a + b);

	int c, d;
	printf("뺄셈할 두 정수를 입력하세요: ");
	scanf("%d%d", &c, &d);
	printf("c-d의 값 %d\n", c - d);

	int e, f;
	printf("곱셈할 두 정수를 입력하세요: ");
	scanf("%d%d", &e, &f);
	printf("c*d의 값 %d\n", e * f);

	int g, h;
	printf("나눗셈할 두 정수를 입력하세요: ");
	scanf("%d%d", &g, &h);
	printf("g/h의 값 %d\n", g / h);

	return 0;
}