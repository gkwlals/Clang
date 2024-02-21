#include<stdio.h>

typedef struct Node {
	int data;
	struct Node* pNode;
}Node;

int main() {
	Node a, b;
	a.data = 10;
	a.pNode = &b;
	b.data = 50;
	printf("%d", a.pNode->data);





	return 0;
}