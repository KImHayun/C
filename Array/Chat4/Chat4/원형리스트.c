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
//		printf("�޸� �Ҵ� ����!!");
//		return;
//	}
//	else {
//		newNode->data = data;
//		newNode->link = NULL; //NULL�� �ʱ�ȭ
//		return newNode;
//	}
//}
//void insertFirstNode(HeadNode* phead, ListNode* newNode) //ù��° ��带 ����ִ� ���
//{
//	if (phead->head == NULL) { //�������� ����Ʈ�� ������ ���
//		phead->head = newNode; //�� ��带 ����Ʈ�� ���� ���� ����
//		newNode->link = newNode; 
//	}
//	else //�׹ۿ� 
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
