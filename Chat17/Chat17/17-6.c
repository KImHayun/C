#include <stdio.h> //����ü �������� ���

struct score // ����ü ����
{
	int kor; // ���� ������ ������ ���
	int eng; // ���� ����
	int math; // ���� ����
};

//int main(void)
//{
//	struct score yun = { 90,80,70 }; // ����ü ���� ����� �ʱ�ȭ
//	struct score* ps = &yun; // ����ü �����Ϳ� �ּ� ����
//	 
//	printf("���� : %d\n", (*ps).kor); // ����ü �����ͷ� ��� ����
//	printf("���� : %d\n", ps -> eng); // ->�����ڷ� ���
//	printf("���� : %d\n", ps -> math);
//
//	return 0;
//}