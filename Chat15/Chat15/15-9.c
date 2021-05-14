#include <stdio.h>
//void 포인터의 사용
int main(void)
{
	int a = 10; //int형 변수
	double b = 3.5; //double형 변수
	void* vp; //void 포인터

	vp = &a; //int형 변수의 주소 저장
	printf("a : %d\n", *(int*)vp);

	vp = &b; //double형 변수의 주소 저장
	printf("b: %.1f\n", *(double*)vp);

	return 0;
}