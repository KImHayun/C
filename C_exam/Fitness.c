//���α׷��� ��� Ȱ��: ��Ʈ�Ͻ� ȸ������ ���α׷�
//�ű�ȸ�� ����� ȸ����ȣ�� �̸�, ü���� �Է��ϰ�, heap������ ����!
//ȸ�� ��ȣ�� ������ �Է��ϸ� �Է��� �����!
//�� ȸ����, ���ü��, �ִ�ü���� ���� ȸ���� ������ ��µ�!
#include <stdio.h>
typedef struct {
	int num; //int(����), int�� num���� ����
	char name[20]; //char(���ڿ�), char������ name���� ����, ���� 20������ ���
	double weight; //double-> �Ǽ��� �ٲ� (������ �Ҽ��� ����)
} Fitness;

Fitness* ary[100]; //������ �迭 ����
void total_number(int count);  //��ü ��� ȸ�� �� ��ȯ
double average_weight(Fitness** pary, int count); //��� ü�� ��ȯ
int max_weight(Fitness** pary, int count); //�ִ� ü���� ȸ���� index ��ȯ
void print_info(Fitness** pary, int index); //ȸ�� ���� ���
void free_ary(Fitness** pary, int count); //���� �Ҵ� ���� ����

int main() 
{

	return 0;
}