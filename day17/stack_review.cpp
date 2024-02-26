#include<stdio.h>

typedef struct Stack {
	int top;
	int data[100];
}Stack;

void stacklinit(Stack*stack) {
	stack->top - 1;
}

int isEmpty(Stack* stack) {
	return (stack->top==- 1);
}

void push(Stack*stack)