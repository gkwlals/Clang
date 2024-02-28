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

void initQueue(Queue* q) {
	q->front = NULL;
	q->rear = NULL;
}

int isEmpty(Queue*q){
	return q->front == NULL;
}


void enqueue(Queue* q) {
	//1. 새로운 노드 만들기
	Node* newNode;
	newNode=(Node*)malloc(sizeof(Node));
	int num;
	printf("데이터 입력");
	scanf("%d", &num);
	newNode->data = num;
	newNode->next = NULL;

	if (isEmpty(q)) {
		q->front = newNode;
	}
	else {
		//맨뒤 손님의 뒤에 넣기
		q->rear->next = newNode;
	}
	//2. 
	// -1)비었으면 맨앞에 노드 놓기
	// -2)안비었으면 마지막 손님의 뒤로 노드 놓기
	
	//3.노드의 마지막을 마지막으로 위치하기
	q->rear = newNode;
}

void dequeue(Queue* q) {
	if (isEmpty(q)) {
		printf("키오스크가 비었습니다.\n");
		return;
	}
	Node* target;
	target = q->front;

	q->front = q->front->next;
	if (q->front == NULL) {
		q->rear == NULL;
	}
	free(target);
}

void printQueue(Queue*q){
	if (isEmpty(q)) {
		printf("키오스크가 비었습니다\n");
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


int main(){

	Queue kiosk;
	initQueue(&kiosk);
	enqueue(&kiosk);
	enqueue(&kiosk);
	enqueue(&kiosk);
	printQueue(&kiosk);
	dequeue(&kiosk);
	printQueue(&kiosk);
	//initQueue(&kiosk);
	
}