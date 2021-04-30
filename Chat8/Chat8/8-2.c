//성적처리프로그램
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main(void)
//{
//	int score[5]; //다섯과목의 성적을 입력할때 int형 배열선언
//	int i; //반복 제어변수
//	int total = 0; //총점을 누적할 변수
//	double avg; //평균을 저장할 변수
//
//	for (i = 0; i < 5; i++) //i가 0부터 4까지 5번 반복
//	{
//		scanf("%d", &score[i]); //각 배열 요소에 성적 입력
//	}
//	for (i = 0; i < 5; i++)
//	{
//		total  = score[i]; //성적을 누적하여 총점 계산
//
//	}
//	avg = total / 5.0; //평균계산
//	for (i = 0; i < 5; i++)
//	{
//		printf("%5d", score[i]); //성적출력
//
//	}
//	printf("\n");
//
//	printf("평균 : %.1lf\n", avg); //평균출력
//	
//	return 0;
//}