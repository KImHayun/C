#include <stdio.h>
#include <stdbool.h>
//BSearch(int* pary, int sz, int tg)
//{
//	int first = 0; //ó��
//	int last = sz - 1 ; //��
//	int mid;  //�߰����� ������ �� �ִ� ���� ����
//	while (first <= last) {
//		mid = (first + last) / 2;
//		if (tg == pary[mid]) return mid; //tg=target
//		else {
//			if (tg > pary[mid])first = mid + 1;
//		}
//	}
//	return -1; 
//}
////����Ž���� �� ���� ����!
//int main() 
//{
//	//int ary[] =  { 3,5,8,2,7,6,1 };
//	int ary[] = { 1,2,3,4,5,6,7,8 };
//	int size = sizeof(ary) / sizeof(ary[0]);
//	int index;
//
//	index = BSearch(ary,size, 6); //�迭����, ����������
//	if (index == -1) printf("Ž������!!!\n");
//	else printf("%d\n", index);
//	
//	return 0;
//}