#include <stdio.h> //* = 간접참조연산자(선언시 아무의미X, 메인함수에서 간접참조연산자가 쓰이면 가리키는 주소의
//데이터 값을 의미한다!)
typedef struct node {//struct 예약어는 구조체를 만들겠다는 선언!, typedef는 type definition의 약자로 형을 정의하겠다는 의미!
	int data;
	struct node *link; //자료형은 구조체 포인터(*)link(식별자)
}Node; //형 재정의를 하면 struct예약어를 쓰지 않고도 멤버변수를 쓸 수 있다! (멤버변수: 중괄호안에 든거)
//malloc , calloc, realloc(재할당)
// 고급언어라는 것은? 사용자가 메모리버퍼를 제어하는 언어이다!
// 저급언어라는 것은? 하드웨어가 처리하는 1,0으로 구성된 자료구조를 메모리 버퍼상으로 제어하는 언어이다!
// 컴파일러는 사용자가 작성한 고급언어를 기계가 이해할 수 있는 저급언어로 번역해주는 것이다!
//동적할당은 램의 힙영역에메모리버퍼를 할당하는 것을 의미함! 사용하고자 하는 목적은 
void addNode(Node* target, int data) //addNode->이미 만들어진 노드에서 데이터값을 가리킴
//선생님이 함수를 쓸 때 반환값이 없고 입력값이 2개인 함수 서식을 사용하겠다고 선언!
{ //void addNode(Node* target, int data)<-함수원형 {}중괄호부터 연산이 시작됨!
	//void=비다, 함수원형에서 맨 앞은 함수의 반환값을 의미함
	//함수명은 변수의 이름 같은거!
	//()소괄호 안에 있는 것은 함수에서 사용 할 변수이다! 메인함수에서 호출 시 실인수 값을 복사해서 사용한다!
	Node *newNode = (Node*)malloc(sizeof(Node));//Node사이즈지정, 노드동적할당,구조체포인터로 형변환시켜주겠다!,
	//단순히 연산된 상태(r value = 대입연산자의 오른쪽에있는것, r value를 l value로 할당한다!)
	newNode->data = data;//함수의 실인수의 값을 복사한 매개변수 데이터를 지금 r value로 선언해놨다.
	//대입연산자를 만나서 r value를 l value의 저장한다. newNode에 data값을 저장함!
	newNode->link = target->link;
	target->link = newNode;
}
int main()
{ //malloc함수는 필요로 하는 매개변수가 할당하고자 하는 자료형의 크기이다!
	Node *head = (Node*)malloc(sizeof(Node)); //헤더노드 생성
	head->link = NULL;  //링크값은 0
	/*여기부터 함수 호출*/
	Node* target = (Node*)malloc(sizeof(Node));
	target->data = 10;

	Node* curr = head->link;//첫번째 노드의 주소값을 저장 , 첫번째 노드를 가리킴

	return 0;
}