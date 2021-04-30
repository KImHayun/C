//종료시키는 key값
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{	int a, b;
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

	int a, b;
	char c; //문자 변수선언
	int sum; //sum선언
	printf("덧셈할 두 정수를 입력하세요 : ");
	scanf("%d%d", &a, &b);//두개의 정수를 입력받아야 해서 %d%d
	printf("연산할 연산기호를 입력하세요: ");
	scanf(" %c", &c); //연산기호는 하나만 입력받아서 (더하기,빼기)
	if (c == '+') // if는 조건! 문자를 나타낼땐 '+'
	{ printf("a+b 값 %d\n", a + b);
	}

	
	return 0;
}