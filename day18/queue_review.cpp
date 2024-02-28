#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	int data;
	struct Node* next;
}Node;

typedef struct Queue {
	Node* front;
	Node* rear;
}Queue;

void initQue(Queue* q) {
	q->front = NULL;
	q->rear = NULL;
}

int isEmpty(Queue* q) {
	return q->front == NULL;
}

void enque(Queue* q) {
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	int num;
	printf("데이터 입력:");
	scanf("%d", &num);
	newNode->data = num;
	newNode->next = NULL;
	if (isEmpty(q)) {
		q->front = newNode;
	}
	else {
		q->rear->next = newNode;
	}
}


void printQueue(Queue* q) {
	if (isEmpty(q)) {
		printf("키오스크가 비었습니다.\n");
		return;
	}
	Node* horse;
	horse = q->front;
	while (horse != NULL) {
		printf("%d", horse->data);
		horse = horse->next;
	}
	printf("\n");
}

void dequeue(Queue* q) {
	if (isEmpty(q))
}


int main() {
	Queue kiosk;
	initQueue(&kiosk);
	enqueue(&kiosk);
	enqueue(&kiosk);
	enqueue(&kiosk);
	printQueue(&kiosk);
	dequeue(&kiosk);
	printQueue(&kiosk);

}