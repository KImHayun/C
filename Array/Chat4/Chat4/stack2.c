//#include <stdio.h>
//#include <stdbool.h>

//typedef struct snode //스택노드
//{
//	int data;
//	struct snode* link;
//}SNode;
//
//typedef struct
//{
//	SNode* topstack;
//}TStack; //헤더역할
//
//TStack* createHead()
//{
//	TStack* t = (TStack*)malloc(sizeof(TStack));
//	if (t != NULL) t->topstack = NULL;
//	return t;
//}
//
//int isEmpty(TStack *ptstack)
//{
//	if (ptstack->topstack == NULL) return true;
//	else return false;
//}
//void push(TStack* ptstack, int data)
//{
//	SNode* newNode = (SNode*)malloc(sizeof(SNode));
//	if (newNode == NULL) return;
//	newNode->data = data;
//	newNode->link = ptstack->topstack;
//	ptstack->topstack = newNode;
//}
//int pop(TStack* ptstack) //삭제
//{
//	int data;
//	SNode* temp;
//	if (isEmpty(ptstack)) {
//		printf("STACK is EMPTY!\n"); //비어있음!
//		return;
//	}
//	else {
//		data = ptstack->topstack->data;
//		temp = ptstack->topstack;
//		ptstack->topstack = ptstack->topstack->link;
//		free(temp);
//		return data;
//	}
//}
//int peek(TStack* ptstack)//맨위의 스텍확인
//{
//	if (isEmpty(ptstack))
//	{
//		printf("STACK EMPTY!\n");
//		return;
//	}
//	else {
//		return ptstack->topstack->data;
//	}
//}
//void printStack(TStack* ptstack)
//{
//	SNode* curr = ptstack->topstack;
//	while ( curr != NULL){
//		printf("%d   ", curr->data);
//		curr = curr->link;
//	}
//}
//int main()
//{
//	TStack* h = createHead();
//	push(h, 10);
//	push(h, 20);
//	push(h, 30);
//	push(h, 40);
//
//	printStack(h);
//
//	pop(h); //삭제 (맨 앞에 값)
//
//	return 0;
//}