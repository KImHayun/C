#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int a, b;
	printf("������ �� ������ �Է��ϼ��� : ");
	scanf("%d%d", &a, &b);
	printf("a+b �� %d\n", a + b);

	int c, d;
	printf("������ �� ������ �Է��ϼ���: ");
	scanf("%d%d", &c, &d);
	printf("c-d�� �� %d\n", c - d);

	int e, f;
	printf("������ �� ������ �Է��ϼ���: ");
	scanf("%d%d", &e, &f);
	printf("c*d�� �� %d\n", e * f);

	int g, h;
	printf("�������� �� ������ �Է��ϼ���: ");
	scanf("%d%d", &g, &h);
	printf("g/h�� �� %d\n", g / h);

	return 0;
}