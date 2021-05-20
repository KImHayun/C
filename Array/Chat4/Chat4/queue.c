//#include <stdio.h>
//#include <stdbool.h>
//#define SIZE 5
////순차자료구조형태
//int isEmpty();
//int isFull();
//void enQueue(int);      //Q에 삽입
//int deQueue();        //Q에서 제거
//
//int rear = 0;		//0으로 초기화, 입구
//int front = 0;		// 출구
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
//void enQueue(int data) //Q에 데이터 삽입
//{
//	if (isFull())printf("Queue overflow!!!\n");
//	else {
//		rear = rear % SIZE;
//		queue[rear] = data;
//		rear++;
//	}
//}
//int deQueue()  //Q삭제
//{
//	if (isEmpty()) {
//		printf("Queue underflow!!!\n");
//		exit(1);
//	}
//	else {
//		return queue[front++ % SIZE];
//	}
//}