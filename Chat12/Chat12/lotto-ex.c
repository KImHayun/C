#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//로또 번호를 저장할 수 있는 배열 선언 lotto[6]
//로또번호 입력 (동일한 번호가 입력 시 에러 메세지를 풀력하고 다시 입력 받으시오)
// input_lotto(), print_lotto()

void input_lotto(int *lotto_num);
void print_lotto(int *lotto_num);

//int main(void)
//{
//	int lotto_num[6]; //배열
//
//	input_lotto(lotto_num);
//	print_lotto(lotto_num);
//
//	return 0;
//}

	void input_lotto(int* lotto_num)
	{
		int i;
		int temp[6];

		for (i = 0; i < 6; i++) 
		{
			printf("로또번호 입력 : "); //6자리 입력
			scanf("%d", &lotto_num[i]);	
		}
		
	}
	 void print_lotto(int* lotto_num)
	{
		 int i;
		 int temp[6];
		
		 for (i = 0; i < 6; i++)
		 {  
			 printf("출력 : ");
			 scanf("%d", &lotto_num[i]);
			 break;
		 }
		/* for (i = 0; i < 45; i++)
		 {
			 printf("번호가 중복되었습니다.");
			 scanf("%d", &lotto_num[i]);
			 break;
		 }*/
		 //출력 함수

	}
	
