#include <stdio.h>
#include <stdbool.h>
/* 선택정렬 : 0번방을 최소값이라고 가정하고, 나머지 원소들과 비교하여 교환한다. 
              가장 최소값이 0번방에 저장됨! */

//void selectSort(int*, int); //selsctSort: 선택정렬
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
//	for (i = 0; i < size - 1; i++) { //0번방이 최소값일때 작업이 끝남
//		min = i; 
//		for (j = i + 1; j < size; j++) { 
//			if (pary[min] > pary[j])min = j;
//		}
//		temp = pary[min];
//		pary[min] = pary[i];
//		pary[i] = temp; //최소값이 i에 저장됨
//		printf("\n%d 단계 : ", i+1);
//		for (k = 0; k < size; k++) {
//			printf("%d ", pary[k]);
//		}
//	}
//}