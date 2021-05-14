#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*5명의 사원아이디, 사원이름, 한달 급여를 입력받아 출력한 뒤 
5명의 사원의 급여 총액과 평균 급여액을 구하시오. 
(이름은 동적 할당에 저장한다)*/
typedef struct employee
{
	int id; //사원번호
	char* name; //사원이름
	int salary; //급여
}employee;

//int main(void)
//{
//	employee s1;
//	char str[20] = { '\0' };
//	printf("사원아이디, 사원이름, 급여를 입력하세요.\n");
//	printf("$ ");
//	scanf("%d %s %d", &s1.id, str, &s1.salary);
//	s1.name = (char*)malloc(strlen(str) + 1);
//	if (s1.name != NULL)strcpy(s1.name, str);
//	printf("%d %s %d", s1.id, s1.name, s1.salary);
//	//결과값 -> 사원아이디(1번), 사원이름(1번), 급여(1번)
//
//	return 0;
//}

