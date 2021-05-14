//�������� ��ġ �����ϱ�
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct { //��� ���Ҹ� �����ϱ� ���� ����ü term ����
	int row;
	int col;
	int value;
}term;

void smTranspose(term a[], term b[]) {
	int m, n, v, i, j, p;
	m = a[0].row; //������ a�� �� ��
	n = a[0].col; //������ a�� �� ��
	v = a[0].value; //������ a���� 0�� �ƴ� ���� ��
	b[0].row = n; //��ġ ���b�� �� ��
	b[0].value = v; //��ġ ��� b�� ���� ��
	if (v > 0) {
		p = 1;
		for (i = 0; i < n; i++)//��� ��� a�� ������ ��ġ �ݺ� ����
			for (j = 1; j <= v; j++) //0�� �ƴ� ���� ���� ���ؼ��� �ݺ� ����
				if (a[j].col == i) { //������ ���� ���ϴ� ���Ұ� ������ b[]����!!!
					b[p].row = a[j].col; 
					b[p].col = a[j].row;
					b[p].value = a[j].value;
					p++;
		}
	}
} //������ ��� ����X