/* �� ����: ��ǥ���� ���� ���� �˰���, ������� �������¸� ����   
            ���ĵǾ� �ִ� ���¿����� �� ������ ���¸� ��� ����! 
			������ �Ǿ����� ���� �������� ����ϸ� ����! 
			1. ���ҵ� �߿��� pivot�� ����. 
			2.�� pivot�� �������� �տ��� ���� ��, �ڿ��� ū ������ ��ġ��Ų��.(����)
			3. ���ҵ� ���� ����Ʈ�� ��������� ���۽�Ų��.->��� ���� ������ �˰����� �����Ѵ�.(����)
			4. ���ĵ� ���� ����Ʈ���� �����Ѵ�.(����)
*/
#include <stdio.h>
#include <stdbool.h>

void quickSort(int*, int, int);

int main() {
	int ary[] = { 3,5,2,4,7,6,1 };
	int size = sizeof(ary) / sizeof(ary[0]);
	quickSort(ary, 0, size - 1); 
	return 0;
}
void quickSort(int* pary, int left, int right)
{
	if (left >= right) return; //������ �����ʺ��� ũ�� �ȵ�!
	int pivot = left; 
	int lleft = pivot + 1;
	int lright = right; //�ʱⰪ�� right�� ��
	int temp;
	
	while (lleft <= lright) {    //lleft�� lright�� ��ü�� �ȵɶ����� while������ ����
		while (pary[lleft] <= pary[pivot])lleft++; //���ʿ��� pivot���� �������� �;���! �� ������ �ƴ� ��
		while (pary[lright] >= pary[pivot]) lright--; //lright�� �� ������ ���� -�� �����ϸ鼭 ������ �̵�

		if (lleft > lright) { //lleft�� �� ũ�� �ǹ̴� ��ü �Ǿ��� �ǹ�
			//���� �ٲ������
			temp = pary[lright];
			pary[lright] = pary[pivot];
			pary[pivot] = temp;
		}
		else {
			//lright = ������ 
			temp = pary[lright];
			pary[lright] = pary[lleft];
			pary[lleft] = temp;
		}
	}
	for (int k = 0; k < right + 1; k++) printf("%d ", pary[k]);
	printf("\n");
	quickSort(pary, left, lright - 1); //�����°� lright -1���� ����
	quickSort(pary, lright + 1, right);
}
