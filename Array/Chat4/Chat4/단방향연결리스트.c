#include <stdio.h>
typedef struct node
{
	int data; 
	struct node* next; //다음구조체를 가리키는 포인트를 집어넣는 next(본인이 이름 짓기 나름)

}Node;
typedef struct {
	Node* head; //head는 node를 가리킴 (node를 가리킬 수 있는 타입이 와야한다.)
}HeadNode; //HeadNode는 첫번째 node를 가리킴!

/* 헤더를 생성하는 함수 */
HeadNode *createHead(void) //함수의 정의를 작성
{ //createHead = Head를 만드는 함수
	HeadNode *h =(HeadNode*)malloc(sizeof(HeadNode)); //리턴되는 값이 포인트(*) , HeadNode에는 Node에 포인트를 저장할 수 있음
	if (h != NULL) h->head =NULL; //NULL로 초기화!, NULL은 아무런 주소도 안받는 값!!!
	//역참조는 NULL이 h를 가리킴
	return h; //출력이 있으니까 return이 있어야함
} 
Node* preinsertNode(HeadNode *h, int data) //앞에(pre)노드를 삽입하는 함수 , 입력이 있어야해서 int data가 들어감
{ //변이에 집어넣는 함수
	Node *newNode = (Node*)malloc(sizeof(Node)); //노드를 동적할당받음 , newnode만 만드는 함수임
	if (newNode != NULL) {
		newNode->data = data; 
		newNode->next = h->head;
		h->head = newNode; 
	}
}
/*후위 삽입 함수*/ 
void rearInsertNode(int data) //후위노드 : 새로운 노드가 맨 마지막 노드로 가는 것!
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	if(newNode != NULL) {
		newNode->data = data;

	}
}
/*노드를 출력하는 함수*/ 
 void printNode(HeadNode* h)//반환값이 없어서 앞에 void
{
	 Node* curr = h->head; //head가 빈값이 돼서 curr함수를 다시 만들어줌!
	 int i = 1; //int 는 방 선언
	 while (curr != NULL) // != 뜻은 아니면 curr이 NULL이 아니면 '거짓'
	 {
		 printf("%d번째 노드 데이터 %d\n", i, curr->data);
		 curr = curr->next; // curr = NULL
		 i++;//i = 2가 되고 
	 }


}

int main(void)
{
	HeadNode* h = createHead();
	preinsertNode(h,10);
	printNode(h);
	return 0;
}