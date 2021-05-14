////단순 연결리스트에 노드 삽입하기
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////단순 연결 리스트의 노드 구조를 구조체로 정의
//typedef struct ListNode {
//	char data[4];
//	struct ListNode* link;
//}listNode;
//
////리스트 시작을 나타내는 head 노드를 구조체로 정의
//typedef struct {
//	listNode *head;
//}linkedList_h;
//
////공백 연결 리스트를 생성하는 연산
//linkedList_h* creatrelLinkedList_h(void) {
//	linkedList_h* L;
//	L = (linkedList_h*)malloc(sizeof(linkedList_h));
//	L->head = NULL;
//	return L;
//}
//
////연결 리스트의 전체 메모리를 해제하는 연산
//void freeLinkedList_h(linkedList_h *L) {
//	listNode *p;
//	while (L->head != NULL) {
//		p = L->head;
//		L->head = L->head->link;
//		free(p);
//		p = NULL;
//	}
//}
////연결 리스트를 순서대로 출력하는 연산
//void printList(linkedList_h* L) {
//	listNode* p;
//	printf("L=(");
//	p = L->head;
//	while (p != NULL) {
//		printf("%s", p-> data);
//		p = p->link;
//		if (p != NULL) printf(" ,");
//	}
//	printf(")\n");
//}
//
//void insertFirstNode(linkedList_h* L, char* x) {
//	listNode* newNode;
//	newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//	newNode->link = L->head;
//	L->head = newNode;
//}
//void insertMiddleNode(linkedList_h* L, listNode* pre, char* x); {
//	listNode* newNode;
//	newNode = (listNode*)malloc(sizeof(listNode));
//	strcpy(newNode->data, x);
//
//	if (L == NULL) {
//		newNode->link = NULL;
//		L->head = newNode;
//	}
//	else if (pre == NULL) {
//		L->head = newNode;
//	}
//	else{
//		newNode->link = pre->link;
//		pre->link = newNode;
//	}
//}
//

