////sizeof연산자를 사용한 배열
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h> 
//int main(void)
//{
//	int score[5];
//	int i;
//	int total = 0;
//	double avg;
//	int count;
//
//	count = sizeof(score) / sizeof(score[0]);
//
//	for (i = 0; i < count; i++)
//	{
//		scanf("%d", &score[i]);
//	}
//	for (i = 0; i < count; i++)
//	{
//		total += score[i];
//	}
//	avg = total / (double)count;
//
//	for (i = 0; i < count; i++)
//	{
//		printf("%d5", score[i]);
//	}
//	printf("\n");
//
//	printf("평균 : %.1lf\n", avg);
//
//	return 0;
//
//}