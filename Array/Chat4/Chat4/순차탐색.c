#include <stdio.h>
#include <stdbool.h>

//int LSearch(int* pary, int sz, int tg)  //1차원배열
//{
//	int i;
//	for (i = 0; i < sz; i++) {
//		if (tg == pary[i])return i;
//	}
//	return -1;
//}
//
//int main() {
//	int index;
//	int ary[] = { 3,5,8,2,7,6,1 };
//	int size = sizeof(ary) / sizeof(ary[0]);
//	index =	LSearch(ary, size, 3); //int ary 값에 없는 값을 선정하면 찾기실패가 출력됨
//	if (index == -1)printf("찾기 실패!!!\n");
//	else printf("%d\n", index);
//
//	return 0;
//}