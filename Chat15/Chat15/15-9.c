#include <stdio.h>
//void �������� ���
int main(void)
{
	int a = 10; //int�� ����
	double b = 3.5; //double�� ����
	void* vp; //void ������

	vp = &a; //int�� ������ �ּ� ����
	printf("a : %d\n", *(int*)vp);

	vp = &b; //double�� ������ �ּ� ����
	printf("b: %.1f\n", *(double*)vp);

	return 0;
}