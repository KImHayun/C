#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//5���� ����, ����, ����, ���� �������

int main(void)
{
	int score[5][4]; //5���� 4���������� ����
	int total; //����
	double avg; //���
	int i, j; //�ݺ������

	for (i = 0; i < 5; i++) //�л�����ŭ �ݺ�
	{
		printf("���� ���� �Է� : ");

		for (j = 0; j < 4; j++) //4�����Է� 
		{
			scanf("%d", &score[i][j]); //�����Է�
			
		}
	}
	for (i = 0; i < 5; i++) //�л�����ŭ �ݺ�
	{
		total = 0; //�л��� �ٲ𶧸��� 0���� �ʱ�ȭ

		for (j = 0; j < 1; j++) //�������ŭ �ݺ�
		{
			total += score[i][j];
		}
		avg = total / 5;
		printf("���� ���� : %d, ��� : %.2lf\n", total, avg);
	}
	return 0;
}