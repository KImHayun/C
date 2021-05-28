//ref(reference)를 쓰면 포인터를 쓸 필요가 없다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>

void InputName(char*& Name) //변수명을 통해 Name을 받음
{
	Name = (char*)malloc(32); 
	strcpy(Name, "kim sang hyung");
}

//int main() 
//{
//	//char* Name;
//
//	//InputName(Name); //InputName 함수 호출
//	//printf("이름은 %s입니다.\n", Name);
//	//free(Name);
//
//	int a = 10;
//	int& ra = a;
//	int* pa = &ra;
//	printf("%p %p %p"); //변수 a에 대한 주소값을 가짐
//}
