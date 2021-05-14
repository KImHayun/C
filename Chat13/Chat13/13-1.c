#include <stdio.h>

void assign(void); //함수선언
 
//int main (void)
//{ 
//	auto int a = 0; //지역변수선언과 초기화, auto는 생략가능!
//
//	assign(); //함수호출
//	printf("main 함수 a : %d\n", a);
//
//	return 0;
//}

void assign(void)
{
	int a; //main 함수에 있는 변수와 같은 이름의 지역변수, auto 생략

	a = 10; //assign 함수 안에 선언된 a에 대입
	printf("assign 함수 : %d\n", a); //assign 함수에 선언된 a값 출력
}