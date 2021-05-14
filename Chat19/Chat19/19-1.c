//사용자 정의 헤더파일을 사용하는 프로그램
typedef struct 
{
	int num;          //학번
	char name[20];    //이름
}Student;


//#include <stdio.h> //전처리
//
//int main(void)
//{ 
//	Student a = { 315 ,"홍길동" }; //구조체 변수 선언과 초기화
//	printf("학번 : %d, 이름 : %s\n ", a.num, a.name); //구조체 멤버 출력
//
//
//	return 0;
//}