#include <stdio.h>

void print_str(char **pps, int cnt);

//int main(void)
//{
//	char *ptr_ary[] = {"eagle","tiger","lion", "squrrel"}; //�ʱ�ȭ
//	int count; //�迭 ��Ҽ��� ������ ����
//
//	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); //�迭 ��Ҽ� ���
//	print_str(ptr_ary, count); //�迭��� �迭 ��Ҽ��� �ְ� ȣ��
//
//	return 0;
//}

void print_str(char **pps, int cnt) //�Ű������� ���� ������ ���
{
	int i;

	for (i = 0; i < cnt; i++) //�迭 ��� ����ŭ �ݺ�
	{
		printf("%s\n", pps[i]); //���������͸� �迭��ó�� ���
	}
}