//#include <stdio.h>
//#include <stdbool.h> //bool 때문에 TRUE, FALSE가 필요없음
//#define STACK_SIZE  3 //규정하다
////#define TRUE        1 //TRUE라는 문자를 발견하면 1로 바꿔라!
////#define FALSE       2 
//
//int isEmpty();//stack 공백 체크
//
//int isFULL();//stack이 가득찼는지 확인(포화체크)
//
//void push(int); //스택에 입력(삽입)
//
//int pop(); //스택에서 출력 (출력을 해서 값을 없애버림, 삭제)
//
//int peek(); //맨 위의 스택 확인
//
//void printStack();
//
//int stack[STACK_SIZE]; //현재 사이즈는 3
//int top = -1; //현재 스택의 위치를 확인함 , 항상 스택의 맨 위를 가리킴!
//
//int main() {
//	push(10);
//	push(11);
//	push(12);
//
//	pop();
//	push(13);
//
//	printStack();
//
//	return 0;
//}
//
//int isEmpty()  //스택이 공백인지 아닌지 확인
//{
//	if (top <= -1) return true;
//	else return false;
//}
//
//int isFull() 
//{
//	if (top >= STACK_SIZE - 1)return  true;
//	else return false;
//}
//
//void push(int data)
//{
//	if (isFULL()) {
//		printf("STACK overflow!!!\n");  //스택이 가득참
//		return;
//	}
//	else
//	{
//		stack[++top] = data;  //-1을 0으로 바꿈 , 처음 top = -1
//	}
//}
//
//int pop() 
//{
//	if (isEmpty())
//	{
//		printf("STACK underflow!!!\n"); 
//		return;
//	}
//	else
//	{
//		return stack[top--];
//	}
//}
//
//int peek() //맨위의 스택상태를 확인
//{
//	if (isEmpty()) {
//		printf("STACK underflow!!!\n"); 
//		return;
//	}
//	else return stack[top];
//}
//
//void printStack()
//{
//	int i;
//	if (!isEmpty()) //비지 않으면 출력
//	{
//		for (i = 0; i <= top; i++) 
//		{
//			printf("%d  ", stack[i]);
//		}
//	}
//}