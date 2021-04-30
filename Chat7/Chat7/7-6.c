//#include <stdio.h> //재귀함수 (종료조건 필요!!!)
//
//void fruit(int count);
//
//int main(void)
//{
//	fruit(1); //처음 호출하므로 1을 인수로 준다.
//	return 0;
//}
//void fruit(int count) //호출횟수를 매개변수에 저장
//{
//	printf("apple\n");
//	if (count == 3) return; //호출 횟수가 3이면 반환하고 끝낸다.
//	fruit(count + 1); //재호출 시 호출횟수를 1증가
//}