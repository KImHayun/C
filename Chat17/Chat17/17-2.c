#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct profile //�Ż�� ����ü ����
{
	char name[20]; //�̸��� ������ �迭 ���
	int age; //����
	double height; //Ű
	char* intro; //�ڱ�Ұ��� ���� ������
};

//int main(void)
//{
//	struct profile yun; //profile ����ü ���� ����
//
//	strcpy(yun.name, "������"); //name �迭 ����� �̸� ����
//	yun.age = 27; //age ����� ���� ����
//	yun.height = 161.5; //height ����� Ű ����
//
//	yun.intro = (char*)malloc(80); //�ڱ� �Ұ��� ������ ���� ���� �Ҵ�
//	printf("�ڱ�Ұ� : ");
//	gets(yun.intro); //�Ҵ��� ������ �ڱ�Ұ� �Է�
//
//	printf("�̸� : %s\n", yun.name); //�� ����� ������ ���
//	printf("���� : %d\n", yun.age);
//	printf("Ű : %.1lf\n", yun.height);
//	printf("�ڱ�Ұ� : %s\n", yun.intro); //���� �Ҵ� ���� ��ȯ
//	free(yun.intro);
//
//	return 0;
//}