#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

typedef struct Stack {
	Node* top;
}Stack;

void initStack(Stack* st) {
	st->top = NULL;
}
int isEmpty(Stack* st) {
	return st->top == NULL;
}

//Node*createNode(){}
Node* createNode() {
	Node* newNode;
	newNode = (Node *) malloc(sizeof(Node));
	int num;
	printf("데이터 입력:");
	scanf("%d", &num);
	newNode->data = num;
	newNode->next = NULL;
	return newNode;
}

void push(Stack* st) {
	Node* newNode = createNode();
	newNode->next = st->top;
	st->top = newNode;
}

void pop(Stack* st) {
	if (isEmpty(st)) {
		printf("스택이 비었습니다\n");
		return;
	}
	Node* target;
	target = st->top;
	st->top = target->next;
	free(target);
}

void printStack(Stack* st) {
	if (isEmpty(st)) {
		printf("스택이 비어있습니다\n");
		return;
	}
	Node* horse;
	horse = st->top;
	while (horse != NULL) {
		printf("%d", horse->data);
		horse = horse->next;
	}
	printf("\n");
}

int main() {
	Stack st;
	push(&st);
	push(&st);
	push(&st);
	pop(&st);
	printStack(&st);
}