#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> 

//int main(void)
//{
//	char temp[80]; //�ӽ� char �迭
//	char* str[3]; //���� �Ҵ� ������ ������ ������ �迭(3���� ������ �� �ִ� ����Ʈ �迭)
//	int i; //�ݺ� ���� ����
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("���ڿ��� �Է��ϼ��� : "); 
//		gets(temp); //���ڿ� �Է� (gets: ���ڿ� �����Լ�)
//		str[i] = (char*)malloc(strlen(temp) + 1); //���ڿ� ���� ���� �Ҵ�
//		strcpy(str[i], temp); //���� �Ҵ� ������ ���ڿ� ����
//	}
//	for (i = 0; i < 3; i++) 
//	{
//		printf("%s\n", str[i]); //�Էµ� ���ڿ� ���
//	}
//	for (i = 0; i < 3; i++)
//	{
//		free(str[i]); //���� �Ҵ� ���� ��ȯ
//	}
//	return 0;
//}