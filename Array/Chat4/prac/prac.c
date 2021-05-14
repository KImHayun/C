#include <stdio.h>

typedef struct node {
    int data;
    struct node* next;
}Node;

typedef struct {
    Node* head; // 노드를 가리킬수 있는 타입이 와야한다.
}HeadNode; //첫번째 노드를 가리키는 것

/*헤더를 생성하는 함수*/
HeadNode* createHead() // 입력값은 필요없다
{
    HeadNode* h = (HeadNode*)malloc(sizeof(HeadNode));//헤드를 생성하는 것이기 때문에 헤드 노드의 크기를 가져와야한다.
    if (h != NULL)
    {
        h->head = NULL;
    }
    return h;
}

Node* preinsertNode(HeadNode* list, int data)
{
    Node* newnode = (Node*)malloc(sizeof(Node));
    if (newnode != NULL)
    {
        newnode->data = data;
        newnode->next = list->head;
        list->head = newnode;
    }


    return newnode;
}
//Node* rearInsertNode(Node* n,Node* n2,int data)
//{
//   Node* newnode=malloc(sizeof(Node));
//   newnode->data = data;
//   n->next = newnode->next;
//   newnode->next = n2->next;
//
//   return newnode;
//}
Node* rearInsertNode(HeadNode* n, int data)
{
    Node* newnode = malloc(sizeof(Node));
    if (newnode != NULL)
    {
        newnode->data = data;

        if (n->head == NULL)
        {
            n->head = newnode;
            newnode->next = NULL;

        }
        else
        {
            Node* curr = n->head;

            while (curr->next != NULL)
            {
                curr = curr->next;
            }
            curr->next = newnode;
            newnode->next = NULL;
        }


    }


    return newnode;
}

void output(HeadNode* n)
{
    Node* curr = n->head;
    int i = 1;
    while (curr != NULL)
    {
        printf("%d번째 노드 데이터 %d\n", i, curr->data);
        curr = curr->next;
        i++;
    }
}

int main()
{
    HeadNode* h = createHead();

    //preinsertNode(h, 10);

    rearInsertNode(h, 20);

    rearInsertNode(h, 30);

    rearInsertNode(h, 40);
    rearInsertNode(h, 50);
    rearInsertNode(h, 60);


    output(h);


    return 0;
}