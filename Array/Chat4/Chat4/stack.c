//#include <stdio.h>
//#include <stdbool.h> //bool ������ TRUE, FALSE�� �ʿ����
//#define STACK_SIZE  3 //�����ϴ�
////#define TRUE        1 //TRUE��� ���ڸ� �߰��ϸ� 1�� �ٲ��!
////#define FALSE       2 
//
//int isEmpty();//stack ���� üũ
//
//int isFULL();//stack�� ����á���� Ȯ��(��ȭüũ)
//
//void push(int); //���ÿ� �Է�(����)
//
//int pop(); //���ÿ��� ��� (����� �ؼ� ���� ���ֹ���, ����)
//
//int peek(); //�� ���� ���� Ȯ��
//
//void printStack();
//
//int stack[STACK_SIZE]; //���� ������� 3
//int top = -1; //���� ������ ��ġ�� Ȯ���� , �׻� ������ �� ���� ����Ŵ!
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
//int isEmpty()  //������ �������� �ƴ��� Ȯ��
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
//		printf("STACK overflow!!!\n");  //������ ������
//		return;
//	}
//	else
//	{
//		stack[++top] = data;  //-1�� 0���� �ٲ� , ó�� top = -1
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
//int peek() //������ ���û��¸� Ȯ��
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
//	if (!isEmpty()) //���� ������ ���
//	{
//		for (i = 0; i <= top; i++) 
//		{
//			printf("%d  ", stack[i]);
//		}
//	}
//}