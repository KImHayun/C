#include <stdio.h>

struct profile // �Ż�� ����ü ����
{
	int age; // ����
	double height; // Ű
};

struct student 
{
	struct profile pf; // profile ����ü�� ����� ���
	int id; // �й��� ������ ���
	double grade; // ������ ������ ���
};

//int main(void)
//{
//	struct student yun; // student ����ü ���� ����
//	yun.pf.age = 27; // pf ����� age ����� ���� ����
//	yun.pf.height = 161.5; // pf����� height ����� Ű ����
//	yun.id = 1551521;
//	yun.grade = 4.5;
//
//	printf("���� : %d\n", yun.pf.age); // pf ����� age ��� ���
//	printf("Ű : %.1f\n", yun.pf.height); // pf ����� height ��� ���
//	printf("�й� : %d\n", yun.id); // id ������
//	printf("���� : %.1lf\n", yun.grade); // grade ��� ���
//
//	return 0;
//}