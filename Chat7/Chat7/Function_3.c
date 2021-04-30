//입력이 있는 함수
#include <stdio.h>

void func(int aa, int ab); //선언해줘야 res에서 오류가 안남! , 함수 선언에선 변수 명 생략가능(aa,ab...)

//int main()
//{
//	int a, b;
//	a = 10, b = 20;
//
//	func(a, b); //입력이 있는 함수호출
//	return 0;
//}
//
//void func(int aa, int ab)
//{
//	int res;
//	res = aa + ab;
//	printf("res : %d\n", res);
//}