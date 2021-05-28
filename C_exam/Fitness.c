//프로그래밍 언어 활용: 피트니스 회원관리 프로그램
//신규회원 등록은 회원번호와 이름, 체중을 입력하고, heap영역에 저장!
//회원 번호로 음수를 입력하면 입력이 종료됨!
//총 회원수, 평균체중, 최대체중을 갖는 회원의 정보가 출력됨!
#include <stdio.h>
typedef struct {
	int num; //int(정수), int를 num으로 선언
	char name[20]; //char(문자열), char변수를 name으로 선언, 문자 20개까지 사용
	double weight; //double-> 실수로 바꿈 (정수에 소수점 붙임)
} Fitness;

Fitness* ary[100]; //포인터 배열 선언
void total_number(int count);  //전체 등록 회원 수 반환
double average_weight(Fitness** pary, int count); //평균 체중 반환
int max_weight(Fitness** pary, int count); //최대 체중의 회원의 index 반환
void print_info(Fitness** pary, int index); //회원 정보 출력
void free_ary(Fitness** pary, int count); //동적 할당 영역 해제

int main() 
{

	return 0;
}