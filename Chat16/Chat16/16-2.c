//동적 할당 영역을 배열처럼 사용
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free 함수 사용을 위한 헤더 파일

//int main(void)
//{
//	int* pi; //동적 할당 영역을 연결할 포인터
//	int i, sum = 0; // 반복 제어 변수와 누적 변수 ->sum에 0초기화 안하면 에러뜸!!!!!!!!!(쓰레기 값을 안 더하려고)
//
//	pi = (int*)malloc(5 * sizeof(int)); // 저장 공간 20바이트 할당 
//	if (pi == NULL)
//	{
//		printf("메모리가 부족합니다!\n");
//		exit(1);
//	}
//	printf("다섯 명의 나이를 입력하세요 : ");
//	for (i = 0; i < 5; i++) // i는 0부터 4까지 5번 반복
//	{
//		scanf("%d", &pi[i]); // 배열 요소에 입력
//		sum += pi[i]; // 배열 요소의 값 누적
//	}
//	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0)); // 평균 나이 출력
//	free(pi); // 할당한 메모리 영역 반환
//	
//
//	return 0;
//}