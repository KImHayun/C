#include <stdio.h>

int GetSum(int from, int to, int step = 1, int base = 0);

//int main() {
//	printf("%d\n", GetSum(1, 10)); // 1은 from , 10은 to에 전달(복사되어 사용 됨)
//	printf("%d\n", GetSum(1, 10, 2)); 
//	printf("%d\n", GetSum(1, 10, 2, 10));
//}

int GetSum(int from, int to, int step/*=1*/, int base/*=0*/)
{
	int sum = base;
	for (int i = from; i <= to; i += step) {
		sum += i;
	}
	return sum;
}
//결과값: 55, 25, 35