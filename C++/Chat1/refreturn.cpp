#include <stdio.h>

int ar[] = { 1,2,3,4,5 };

int& GetAr(int i)
{
	return ar[i]; //������ �� �ִ� ����(����, ���X)
	//return 3; <-���X , ������� ������ ��� ��
}

//int main() 
//{
//	//int& ra = 10;
//	GetAr(3) = 6; //���μ� 3  
//	printf("ar[3]=%d\n", ar[3]); // 3���濡 6�� ����ִ´�
//}

//�����: ar[3]=6