////�ܼ� ���Ḯ��Ʈ�� ��� �����ϱ�
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
////�ܼ� ���� ����Ʈ�� ��� ������ ����ü�� ����
//typedef struct ListNode {
//	char data[4];
//	struct ListNode* link;
//}listNode;
//
////����Ʈ ������ ��Ÿ���� head ��带 ����ü�� ����
//typedef struct {
//	listNode *head;
//}linkedList_h;
//
////���� ���� ����Ʈ�� �����ϴ� ����
//linkedList_h* creatrelLinkedList_h(void) {
//	linkedList_h* L;
//	L = (linkedList_h*)malloc(sizeof(linkedList_h));
//	L->head = NULL;
//	return L;
//}
//
////���� ����Ʈ�� ��ü �޸𸮸� �����ϴ� ����
//void freeLinkedList_h(linkedList_h *L) {
//	listNode *p;
//	while (L->head != NULL) {
//		p = L->head;
//		L->head = L->head->link;
//		free(p);
//		p = NULL;
//	}
//}
////���� ����Ʈ�� ������� ����ϴ� ����
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

