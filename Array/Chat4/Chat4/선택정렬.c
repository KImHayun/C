#include <stdio.h>
#include <stdbool.h>
/* �������� : 0������ �ּҰ��̶�� �����ϰ�, ������ ���ҵ�� ���Ͽ� ��ȯ�Ѵ�. 
              ���� �ּҰ��� 0���濡 �����! */

//void selectSort(int*, int); //selsctSort: ��������
//
//int main() {
//	int ary[] = { 4,2,7,5,9,1,8,3,6 }; 
//	int size = sizeof(ary) / sizeof(ary[0]); 
//	selectSort(ary, size);
//	return 0;
//}
//
//void selectSort(int* pary, int size)
//{
//	int i, j, min, temp, k;
//	for (i = 0; i < size - 1; i++) { //0������ �ּҰ��϶� �۾��� ����
//		min = i; 
//		for (j = i + 1; j < size; j++) { 
//			if (pary[min] > pary[j])min = j;
//		}
//		temp = pary[min];
//		pary[min] = pary[i];
//		pary[i] = temp; //�ּҰ��� i�� �����
//		printf("\n%d �ܰ� : ", i+1);
//		for (k = 0; k < size; k++) {
//			printf("%d ", pary[k]);
//		}
//	}
//}