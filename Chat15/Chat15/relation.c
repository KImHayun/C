#include <stdio.h>

//int main(void)
//{ 
//	int a = 10;
//	int* pa = &a; //변수a의 주소값 저장
//	printf("%p %p\n", &a, pa); 
//	printf("=======================================\n");
//	int ary1[2] = { 1,2 };
//	int (*pary1) = ary1; //동일한 타입의 포인트에 집어넣음 
//	printf("%p %p\n", ary1, pary1);
//	printf("%p %p\n", ary1 + 1, pary1 + 1);
//	printf("=======================================\n");
//	char ary2[2] = { 'a', 'b' };
//	char pary2 = ary2;
//	printf("%p %p\n", ary2, pary2);
//	printf("%p %p\n", ary2 + 1, pary2 + 1);
//	printf("=======================================\n");
//	int ary3[][2] = { {1,2},{3,4} };
//	int(*pary3)[2] = ary3; //2개의 int형을 가지는 1차형배열
//	printf("%p %p\n", ary3, pary3);
//	printf("%p %p\n", ary3 + 1, pary3 + 1);
//	printf("=======================================\n");
//	char *ary4[2] = { "hi", "good" }; //문자열은 캐릭터형 포인터가 와야함
//	char *pary4 = ary4;
//	printf("%p %p\n", ary4, pary4);
//	printf("%p %p\n", ary4 + 1, pary4 + 1);
//	return 0;
//}