#include <stdio.h>
//지금 공부하는건 연결구조자료형! 기능은 각기다른 물리주소에 있는 데이터 값들을 논리적으로 일방향으로 만든것!
//typedef struct node {
//	int data;
//	struct node* link;
//}Node;
//int main()
//{
//	Node* head = (Node*)malloc(sizeof(Node)); //헤더노드 생성 , head(식별자!)
//	Node* node1 = (Node*)malloc(sizeof(Node)); //노드 생성
//	Node* node2 = (Node*)malloc(sizeof(Node));//두번째 노드 생성
//	Node* node3 = (Node*)malloc(sizeof(Node));//*=간접참조연산자(선언 시 아무런 의미X,그러나 코드 구현 시 간접참조 연산자가 있다면
//	//포인터가 가리키는 데이터 값을 의미한다!
//	Node* node4 =(Node*)malloc(sizeof(Node)); //malloc함수는 필요로 하는 매개변수가 할당하고자 하는 자료형의 크기이다!
//	if (node1 == NULL)	return; // =대입연산자, 기능은 r(오른쪽)벨류를 l벨류에 저장(할당)!
//	head->link = node1; //헤더 노드에 첫번째 노드의 주소값을 넣는다 , 링크는 화살표!
//	node1->data = 10;
//	node2->data = 20;
//	node3->data = 30;
//	node1->link = node2; //node2의 시작주소값을 node1의 링크멤버 변수에 할당!
//	node2->link = node3; //node3의 시작주소값을 node2의 링크멤버 변수에 할당!
//	
//	Node* curr = head->link; //첫번째 노드의 주소값을 저장 , 첫번째 노드를 가리킴
//
//	while (curr != NULL) {
//		printf("%d\n", curr->data);
//		curr = curr->link;
//	}
//	
//	free(node1);
//	free(node2); 
//
//		return 0;
//}