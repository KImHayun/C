#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_line(void); //�Լ�����

//int main(void)
//{
//	print_line(); //�Լ�ȣ��  -> print_line(); ���� ����� �Լ��� ȣ����
//	print_line();
//	print_line();
//	print_line();
//	return 0;
//}
void print_line(void)
{
	int a, b;
	char c;
	int sum; //����
	int sub; //����
	printf("�� ������ �Է��Ͻÿ�: ");
	scanf("%d%d", &a, &b);
	printf("������ �����ȣ�� �Է��ϼ���: "); //+ �Ǵ� -
	scanf(" %c", &c); //�����ȣ�� �ϳ��� �Է¹޾Ƽ� (���ϱ�,����)
	if (c == '+') // if�� ����! ���ڸ� ��Ÿ���� '+'
	{
		printf("a+b �� %d\n", a + b);
	}
	else if (c == '-')
	{
		printf("a-b �� %d\n", a - b);
	}
	else if (c == '*')
		{
			printf("a*b �� %d\n", a * b);
		}
	else if (c == '/')
		{
			printf("a/b �� %d\n", a / b);
		}
	return 0;
}
