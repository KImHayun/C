#include <stdio.h>

//typedef struct node//�� �����Ǹ� ���ؼ� ����ü struct�� node�� Node�� ����
//{
//    int data;
//    struct node* next;
//}Node;
//
//typedef struct//��� ���� �����Ѵ�. �ʱ� ��带 ����ų �� �ִ� ��.
//{
//    Node* head;//��带 ����ų �� �ִ� Ÿ�� ȭ��ǥ�� �ǹ��� ���
//}HeadNode;
//
///*����� �����ϴ� �Լ�*/
//HeadNode* createHead(void)//����带 ����� ���̴�. ����ü�����ͷ� ����Ѵ�.
//{
//    HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));//��带 �����.
//    if (h != NULL) h->head = NULL;//HeadNode�� ���� ó���� �ݵ�� �ʱ�ȭ NULL������ �ʱ�ȭ ���� �ְڴ�.
//    return h;
//}
//
//void preinsertNode(HeadNode* h, int i)
//{
//    Node* newNode = (Node*)malloc(sizeof(Node));//��尡 �����ȴ�.
//    if (newNode != NULL)//����� ������ Ȯ���� �� ������ ���� ������ �����Ѵ�. ��, ��尡 �����ϸ�
//    {
//        newNode->data = i;//������ �����͸� �Ҵ��Ѵ�.
//        newNode->next = h->head;//��� �������� ���� ���θ������ next ����ü �������� ���� �־��ش�. �׷� ó�� ������ ����� 
//        //next��  NULL���� ������.
//        h->head = newNode;//���ο� ����� �ʱ� �ּҰ��� ��忡 �Ҵ��Ѵ�.
//        //n��° ����� next������ �ؽ�Ʈ�����͸���������� n-1��° �ּҰ��� ����ȴ�. �׸��� ����Ű�� �ȴ�.
//        //�� ������� ����ü�� ��� ���� �Ҵ�� �����̴�.
//        //���� ���������� ������ ��尡 �ʱ� ��带 ����Ű�� �ִ�.
//    }
//}
//
//Node rearinsertNode(HeadNode* h, int i)
//{
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    Node* curr;
//
//    if (newNode != NULL)
//    {
//        newNode->data = i;
//        newNode->next = NULL;
//        curr = h->head;
//        if (h->head == NULL)//����Ʈ�ƹ��͵�������
//        {
//            h->head = newNode;
//            return;
//        }
//        while (curr->next != NULL)//������ ��� ã�ư�, �ڿ� ������� ����� ���縦 Ȯ���� �� �����ϱ� ���������µ�
//        {
//            curr = curr->next;//�ڱ� ���� ����ü�� �����ʹϱ� ����ų �� �ִ�.
//        }
//        curr->next = newNode;//curr->next�� ������� �ּ��� �� �ּҸ� �Ҵ��ؼ� �̾��ش�. ���������� �̾��༭ �˼� �ְ� �����.
//    }
//}
//
///*��带 ����ϴ� �Լ�*/
//void Print_Node(HeadNode* h)
//{
//    int i = 1; //ù��° ��
//    while (h->head != NULL)//��尡 �����ϸ� �Ʒ� ������ �����ض� Ȯ���ϰ����ϴ� ������ ��������� �����ε� ��尡 ��� ��������� ������ Ȯ���� �� ���⶧���� NULL�̶�� �Ѵ�.
//    {
//        printf("%d��° ��� �� : %d\n", i++, h->head->data);//��尡 ����Ű�� ������ ���� ����ϼ���
//        h->head = h->head->next;//����ϰ� ���� ���� ����� �ּҰ��� ���� ����� �ּҰ��� �����ϼ���
//        //�׷��� ������ ������ ��� �������� �� �����ϱ�
//    }
//}
//void rmv_node(HeadNode* h) {
//    Node* curr = h->head;//�ܺ� ����ü �����ͺ��� cur ���� �������굵 �����ϴϱ� head�� �ǵ帱 �� ����. �ܺ� ����ü �����͸� ���� �̿��ؼ� NULL���� �־��ش�.
//    while (h->head != NULL) {//����� ������ Ȯ���� �� ���� ���°� �ƴ� ���� �ƴϸ� �ش� ������ ������.
//        //��尡 �����ϸ� �ش� ������ �����Ͻÿ�.
//        curr->data = NULL;//�����Ϳ� NULL���� �����Ѵ�.
//        //printf("%d��° ��� ��: %d\n", i, curr->data);
//        curr = curr->next;//���� ���� �Ѿ��.
//    }//1�� ������ ��ȸ�ϸ鼭 ��� ���ۿ� NULL���� ������ �� ��尡 �ڿ� �������������� �ݺ����� �������´�.
//    h->head = NULL;//���������� head�� �ڱ����� ������ �����Ͱ��� ����ϰ� �о��ش�.
//    while (h->head != NULL) {
//        if (curr->data == NULL) {
//            printf("��尡����� \n");
//        }
//        curr = curr->next;
//    }
//    if ((h->head == NULL))printf("��尡 �����ϴ�. \n");
//}
//
///*��� �˻� �Լ�*/
//Node* searchNode(HeadNode* h, int data){
//    Node* s = h->head; 
//    if (h ->head !=NULL);       
//}

//int main(void)
//{
//    HeadNode* head = createHead();//����� ����
//    preinsertNode(head, 1);
//    preinsertNode(head, 2);
//    preinsertNode(head, 3);
//    preinsertNode(head, 4);
//
//    rearinsertNode(head, 100);
//    rearinsertNode(head, 200);
//    Print_Node(head);//��带 ��ȸ�ϸ鼭 ��µ�
//    Print_Node(head);
//    rmv_node(head);//��带 ��ȸ�ϸ鼭 NULL�� ����
//    Print_Node(head);//����� ���� ����. ��� �ڷᰡ ���ư����� �� �� �ֵ�.
//    return 0;
//}