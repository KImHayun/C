#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_line(void); //함수선언

//int main(void)
//{
//	print_line(); //함수호출  -> print_line(); 적은 수대로 함수를 호출함
//	print_line();
//	print_line();
//	print_line();
//	return 0;
//}
void print_line(void)
{
	int a, b;
	char c;
	int sum; //덧셈
	int sub; //뺄셈
	printf("두 정수를 입력하시오: ");
	scanf("%d%d", &a, &b);
	printf("연산할 연산기호를 입력하세요: "); //+ 또는 -
	scanf(" %c", &c); //연산기호는 하나만 입력받아서 (더하기,빼기)
	if (c == '+') // if는 조건! 문자를 나타낼땐 '+'
	{
		printf("a+b 값 %d\n", a + b);
	}
	else if (c == '-')
	{
		printf("a-b 값 %d\n", a - b);
	}
	else if (c == '*')
		{
			printf("a*b 값 %d\n", a * b);
		}
	else if (c == '/')
		{
			printf("a/b 값 %d\n", a / b);
		}
	return 0;
}
