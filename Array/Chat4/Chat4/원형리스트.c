#include <stdio.h>
//typedef struct listnode {
//	int data;
//	struct  listnode* link;
//}ListNode;
//
//typedef struct {
//	ListNode* head;
//}HeadNode;
//
//HeadNode* createHead(){
//	HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));
//	if (h != NULL)h->head = NULL;
//	return h;
//}
//
//ListNode* createNode(HeadNode* phead, int data)
//{
//	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
//	if (newNode == NULL) {
//		printf("메모리 할당 실패!!");
//		return;
//	}
//	else {
//		newNode->data = data;
//		newNode->link = NULL; //NULL로 초기화
//		return newNode;
//	}
//}
//void insertFirstNode(HeadNode* phead, ListNode* newNode) //첫번째 노드를 집어넣는 경우
//{
//	if (phead->head == NULL) { //원형연결 리스트가 공백인 경우
//		phead->head = newNode; //새 노드를 리스트의 시작 노드로 연결
//		newNode->link = newNode; 
//	}
//	else //그밖에 
//	{ 	
//		newNode->link = phead->head->link;
//		phead->head->link = newNode;
//	}
//}
//void insertlastNode(HeadNode *phead, ListNode *newNode)
//{
//	if (phead->head == NULL)
//	{
//		phead->head = newNode;
//		newNode->link = newNode;
//	}
//	else {
//	}
//}
//
//int main() {
//
//	return 0;
//
//}
