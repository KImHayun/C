// #if, #ifdef, #else, #elseif�� ����� ���Ǻ� ������
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define VER 7 //ġȯ�� �κ��� �ִ� ��ũ�θ� ����
#define BIT16 //ġȯ�� �κ��� ���� ��ũ�θ� ����

int main(void)
{
	int max;

#if VER >=6    //��ũ�θ� VER 6 �̻��̸�
	printf("���� %d �Դϴ�. \n", VER);    //�� ������ ������
#endif  //if�� ��

#ifdef BIT16                    //��ũ�θ� BIT16�� ���� �Ǿ� ������
	max = 32767;                //�� ���� ������
#else                           //BIT16�� ���ǵǾ� ���� ������
	max = 2174783674;           //�� ���� ������
#endif //ifdef�� ��
	printf("int�� ������ �ִ� : %d\n", max); //max���

	return 0;
}