#include <stdio.h>
//���� �����ϴ°� ���ᱸ���ڷ���! ����� ����ٸ� �����ּҿ� �ִ� ������ ������ �������� �Ϲ������� �����!
//typedef struct node {
//	int data;
//	struct node* link;
//}Node;
//int main()
//{
//	Node* head = (Node*)malloc(sizeof(Node)); //������ ���� , head(�ĺ���!)
//	Node* node1 = (Node*)malloc(sizeof(Node)); //��� ����
//	Node* node2 = (Node*)malloc(sizeof(Node));//�ι�° ��� ����
//	Node* node3 = (Node*)malloc(sizeof(Node));//*=��������������(���� �� �ƹ��� �ǹ�X,�׷��� �ڵ� ���� �� �������� �����ڰ� �ִٸ�
//	//�����Ͱ� ����Ű�� ������ ���� �ǹ��Ѵ�!
//	Node* node4 =(Node*)malloc(sizeof(Node)); //malloc�Լ��� �ʿ�� �ϴ� �Ű������� �Ҵ��ϰ��� �ϴ� �ڷ����� ũ���̴�!
//	if (node1 == NULL)	return; // =���Կ�����, ����� r(������)������ l������ ����(�Ҵ�)!
//	head->link = node1; //��� ��忡 ù��° ����� �ּҰ��� �ִ´� , ��ũ�� ȭ��ǥ!
//	node1->data = 10;
//	node2->data = 20;
//	node3->data = 30;
//	node1->link = node2; //node2�� �����ּҰ��� node1�� ��ũ��� ������ �Ҵ�!
//	node2->link = node3; //node3�� �����ּҰ��� node2�� ��ũ��� ������ �Ҵ�!
//	
//	Node* curr = head->link; //ù��° ����� �ּҰ��� ���� , ù��° ��带 ����Ŵ
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