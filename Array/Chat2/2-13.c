//화살표 연산자를 이용해 데이터 항목 참조하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
struct employee {
	char name[10];
	int year;
	int pay;
};

void main() {
	struct employee Lee;
	struct employee* Sptr = &Lee;
	strcpy(Sptr->name, "이순신");
	Sptr->year = 2015;
	Sptr->pay = 5900;

	printf("\n 이름 : %s", Sptr->name);
	printf("\n 입사 : %d", Sptr->year);
	printf("\n 연봉 : %d", Sptr->pay);

	getchar(); //getchar 가 없으면 엔터치면 프로그램이 끝남 , 문자 하나를 입력받을 때 씀
}