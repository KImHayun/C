#include <stdio.h>

struct profile // 신상명세 구조체 선언
{
	int age; // 나이
	double height; // 키
};

struct student 
{
	struct profile pf; // profile 구조체를 멤버로 사용
	int id; // 학번을 저장할 멤버
	double grade; // 학점을 저장할 멤버
};

//int main(void)
//{
//	struct student yun; // student 구조체 변수 선언
//	yun.pf.age = 27; // pf 멤버의 age 멤버에 나이 저장
//	yun.pf.height = 161.5; // pf멤버의 height 멤버에 키 저장
//	yun.id = 1551521;
//	yun.grade = 4.5;
//
//	printf("나이 : %d\n", yun.pf.age); // pf 멤버의 age 멤버 출력
//	printf("키 : %.1f\n", yun.pf.height); // pf 멤버의 height 멤버 출력
//	printf("학번 : %d\n", yun.id); // id 멤버출력
//	printf("학점 : %.1lf\n", yun.grade); // grade 멤버 출력
//
//	return 0;
//}