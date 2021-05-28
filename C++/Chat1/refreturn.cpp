#include <stdio.h>

int ar[] = { 1,2,3,4,5 };

int& GetAr(int i)
{
	return ar[i]; //저장할 수 있는 공간(변수, 상수X)
	//return 3; <-사용X , 상수에는 변수를 써야 함
}

//int main() 
//{
//	//int& ra = 10;
//	GetAr(3) = 6; //실인수 3  
//	printf("ar[3]=%d\n", ar[3]); // 3번방에 6을 집어넣는다
//}

//결과값: ar[3]=6