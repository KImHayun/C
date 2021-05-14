#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

//int main(void)
//{
//	char temp[80]; //임시 char 배열
//	char* str[3]; //동적 할당 영역을 연결할 포인터 배열(3개를 저장할 수 있는 포인트 배열)
//	int i; //반복 제어 변수
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("문자열을 입력하세요 : "); 
//		gets(temp); //문자열 입력 (gets: 문자열 전용함수)
//		str[i] = (char*)malloc(strlen(temp) + 1); //문자열 저장 공간 할당
//		strcpy(str[i], temp); //동적 할당 영역에 문자열 복사
//	}
//	for (i = 0; i < 3; i++) 
//	{
//		printf("%s\n", str[i]); //입력된 문자열 출력
//	}
//	for (i = 0; i < 3; i++)
//	{
//		free(str[i]); //동적 할당 영역 반환
//	}
//	return 0;
//}