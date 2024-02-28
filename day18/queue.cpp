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
	//1. ���ο� ��� �����
	Node* newNode;
	newNode=(Node*)malloc(sizeof(Node));
	int num;
	printf("������ �Է�");
	scanf("%d", &num);
	newNode->data = num;
	newNode->next = NULL;

	if (isEmpty(q)) {
		q->front = newNode;
	}
	else {
		//�ǵ� �մ��� �ڿ� �ֱ�
		q->rear->next = newNode;
	}
	//2. 
	// -1)������� �Ǿտ� ��� ����
	// -2)�Ⱥ������ ������ �մ��� �ڷ� ��� ����
	
	//3.����� �������� ���������� ��ġ�ϱ�
	q->rear = newNode;
}

void dequeue(Queue* q) {
	if (isEmpty(q)) {
		printf("Ű����ũ�� ������ϴ�.\n");
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
		printf("Ű����ũ�� ������ϴ�\n");
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