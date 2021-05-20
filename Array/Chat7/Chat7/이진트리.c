#include <stdio.h>

//typedef struct btnNode {
//	char data;
//	struct btnode* left;
//	struct btnode* right;
//}BTNode;
//
//BTNode* makeBTNode(data)
//{//동적할당으로 만들기
//	BTNode* newNode = (BTNode*)malloc(sizeof(BTNode));
//	newNode->data = data; //노드에 데이터 삽입
//	newNode->left = NULL;
//	newNode->right = NULL;
//	return newNode;
//}
//void makeLeftTree(BTNode* root, BTNode* sub)
//{
//	if (root->left != NULL) free(root->left);
//	root->left = sub;
//}
//
//void makeRightTree(BTNode* root, BTNode* sub)
//{
//	if (root->right != NULL)free(root->right);
//	root->right = sub; //새로운 서브트리로 연결
//}
//void preorder(BTNode* root) // 전위순회: 데이터처리-> 왼쪽 서브로 이동 -> 오른쪽 서브로 이동
//{
//	if (root == NULL) return;
//	printf("%c ", root->data);
//	preorder(root->left); // 왼쪽으로 이동해서 데이터 처리
//	preorder(root->right); // 오른쪽으로 이동해서 데이터 처리
//}
//
//void inorder(BTNode* root) // 중위 순회
//{
//	if (root == NULL)return;
//	inorder(root->left);
//	inorder(root->right);
//	printf("%c ", root->data);
//}
//void postorder(BTNode* root)
//{
//	if (root == NULL)return;
//	postorder(root->left);
//	postorder(root->right);
//	printf("%c ", root->data);
//}
//
//int main()
//{ 
//	BTNode* b1 = makeBTNode('a');
//	BTNode* b2 = makeBTNode('b');
//	BTNode* b3 = makeBTNode('c');
//	BTNode* b4 = makeBTNode('d');
//	BTNode* b5 = makeBTNode('e');
//	BTNode* b6 = makeBTNode('f');
//	BTNode* b7 = makeBTNode('g');
//	BTNode* b8 = makeBTNode('h');
//
//	makeLeftTree(b1, b2);
//	makeRightTree(b2, b3);
//	makeLeftTree(b2, b4);
//	makeRightTree(b2, b5);
//	makeLeftTree(b3, b6);
//	makeRightTree(b3, b7);
//	makeLeftTree(b4, b8);
//
//	preorder(b1);
//	printf("\n");
//
//	inorder(b1);
//	printf("\n");
//
//	postorder(b1);
//	printf("\n");
//
//	return 0;
//}