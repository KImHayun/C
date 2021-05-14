#include <stdio.h>
typedef struct node
{
	int data; 
	struct node* next; //��������ü�� ����Ű�� ����Ʈ�� ����ִ� next(������ �̸� ���� ����)

}Node;
typedef struct {
	Node* head; //head�� node�� ����Ŵ (node�� ����ų �� �ִ� Ÿ���� �;��Ѵ�.)
}HeadNode; //HeadNode�� ù��° node�� ����Ŵ!

/* ����� �����ϴ� �Լ� */
HeadNode *createHead(void) //�Լ��� ���Ǹ� �ۼ�
{ //createHead = Head�� ����� �Լ�
	HeadNode *h =(HeadNode*)malloc(sizeof(HeadNode)); //���ϵǴ� ���� ����Ʈ(*) , HeadNode���� Node�� ����Ʈ�� ������ �� ����
	if (h != NULL) h->head =NULL; //NULL�� �ʱ�ȭ!, NULL�� �ƹ��� �ּҵ� �ȹ޴� ��!!!
	//�������� NULL�� h�� ����Ŵ
	return h; //����� �����ϱ� return�� �־����
} 
Node* preinsertNode(HeadNode *h, int data) //�տ�(pre)��带 �����ϴ� �Լ� , �Է��� �־���ؼ� int data�� ��
{ //���̿� ����ִ� �Լ�
	Node *newNode = (Node*)malloc(sizeof(Node)); //��带 �����Ҵ���� , newnode�� ����� �Լ���
	if (newNode != NULL) {
		newNode->data = data; 
		newNode->next = h->head;
		h->head = newNode; 
	}
}
/*���� ���� �Լ�*/ 
void rearInsertNode(int data) //������� : ���ο� ��尡 �� ������ ���� ���� ��!
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if(newNode != NULL) {
		newNode->data = data;

	}
}
/*��带 ����ϴ� �Լ�*/ 
 void printNode(HeadNode* h)//��ȯ���� ��� �տ� void
{
	 Node* curr = h->head; //head�� ���� �ż� curr�Լ��� �ٽ� �������!
	 int i = 1; //int �� �� ����
	 while (curr != NULL) // != ���� �ƴϸ� curr�� NULL�� �ƴϸ� '����'
	 {
		 printf("%d��° ��� ������ %d\n", i, curr->data);
		 curr = curr->next; // curr = NULL
		 i++;//i = 2�� �ǰ� 
	 }


}

int main(void)
{
	HeadNode* h = createHead();
	preinsertNode(h,10);
	printNode(h);
	return 0;
}