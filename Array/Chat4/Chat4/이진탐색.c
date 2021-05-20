#include <stdio.h>
#include <stdbool.h>
//BSearch(int* pary, int sz, int tg)
//{
//	int first = 0; //처음
//	int last = sz - 1 ; //끝
//	int mid;  //중간값을 저장할 수 있는 변수 선언
//	while (first <= last) {
//		mid = (first + last) / 2;
//		if (tg == pary[mid]) return mid; //tg=target
//		else {
//			if (tg > pary[mid])first = mid + 1;
//		}
//	}
//	return -1; 
//}
////이진탐색은 두 값을 나눔!
//int main() 
//{
//	//int ary[] =  { 3,5,8,2,7,6,1 };
//	int ary[] = { 1,2,3,4,5,6,7,8 };
//	int size = sizeof(ary) / sizeof(ary[0]);
//	int index;
//
//	index = BSearch(ary,size, 6); //배열전달, 사이즈전달
//	if (index == -1) printf("탐색실패!!!\n");
//	else printf("%d\n", index);
//	
//	return 0;
//}