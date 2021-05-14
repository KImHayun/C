#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//5명의 국어, 영어, 수학, 과학 평균점수

int main(void)
{
	int score[5][4]; //5명의 4과목점수를 저장
	int total; //총점
	double avg; //평균
	int i, j; //반복제어변수

	for (i = 0; i < 5; i++) //학생수만큼 반복
	{
		printf("국어 점수 입력 : ");

		for (j = 0; j < 4; j++) //4과목입력 
		{
			scanf("%d", &score[i][j]); //점수입력
			
		}
	}
	for (i = 0; i < 5; i++) //학생수만큼 반복
	{
		total = 0; //학생이 바뀔때마다 0으로 초기화

		for (j = 0; j < 1; j++) //과목수만큼 반복
		{
			total += score[i][j];
		}
		avg = total / 5;
		printf("국어 총점 : %d, 평균 : %.2lf\n", total, avg);
	}
	return 0;
}