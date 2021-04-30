#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void)
{
	char name[20];
	char age[20];
	char address[200];

	printf("이름 입력: ");
	printf("나이 입력: ");
	printf("주소 입력: ");


	scanf("%d%lf",&name, &age, &address); //나이와 주소 함께입력

	return 0;
}
