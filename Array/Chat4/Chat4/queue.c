//#include <stdio.h>
//#include <stdbool.h>
//#define SIZE 5
////�����ڷᱸ������
//int isEmpty();
//int isFull();
//void enQueue(int);      //Q�� ����
//int deQueue();        //Q���� ����
//
//int rear = 0;		//0���� �ʱ�ȭ, �Ա�
//int front = 0;		// �ⱸ
//int queue[SIZE];
//int main() 
//{
//	enQueue(10);
//	enQueue(20);
//	enQueue(30);
//	printf("%d\n", deQueue());
//
//	return 0;
//}
//
//int isEmpty() 
//{
//	if (rear == front)return true;
//	else return false;
//}
//int isFull() 
//{
//	if (front == (rear + 1) % SIZE) //5+1 / SIZE(6)
//		return true;
//	else return false; 
//}
//
//void enQueue(int data) //Q�� ������ ����
//{
//	if (isFull())printf("Queue overflow!!!\n");
//	else {
//		rear = rear % SIZE;
//		queue[rear] = data;
//		rear++;
//	}
//}
//int deQueue()  //Q����
//{
//	if (isEmpty()) {
//		printf("Queue underflow!!!\n");
//		exit(1);
//	}
//	else {
//		return queue[front++ % SIZE];
//	}
//}