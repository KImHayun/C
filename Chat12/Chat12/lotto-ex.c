#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//�ζ� ��ȣ�� ������ �� �ִ� �迭 ���� lotto[6]
//�ζǹ�ȣ �Է� (������ ��ȣ�� �Է� �� ���� �޼����� Ǯ���ϰ� �ٽ� �Է� �����ÿ�)
// input_lotto(), print_lotto()

void input_lotto(int *lotto_num);
void print_lotto(int *lotto_num);

//int main(void)
//{
//	int lotto_num[6]; //�迭
//
//	input_lotto(lotto_num);
//	print_lotto(lotto_num);
//
//	return 0;
//}

	void input_lotto(int* lotto_num)
	{
		int i;
		int temp[6];

		for (i = 0; i < 6; i++) 
		{
			printf("�ζǹ�ȣ �Է� : "); //6�ڸ� �Է�
			scanf("%d", &lotto_num[i]);	
		}
		
	}
	 void print_lotto(int* lotto_num)
	{
		 int i;
		 int temp[6];
		
		 for (i = 0; i < 6; i++)
		 {  
			 printf("��� : ");
			 scanf("%d", &lotto_num[i]);
			 break;
		 }
		/* for (i = 0; i < 45; i++)
		 {
			 printf("��ȣ�� �ߺ��Ǿ����ϴ�.");
			 scanf("%d", &lotto_num[i]);
			 break;
		 }*/
		 //��� �Լ�

	}
	
