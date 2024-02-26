#include<stdio.h>

//�迭 ������� �� ����
typedef struct Stack {
	int top; // ���� ��ġ [����������]
	int data[100];
}Stack;

void stacklnit(Stack* stack) {
	stack->top = -1;
}


//isEmpty ��� ������ ����ֽ��ϴ� �ƴϸ� ���� top�� ~�Դϴ�.
int isEmpty(Stack* stack) {
	return (stack->top == -1);
}

void push(Stack* stack) {
	int num;
	printf("���� �Է�:");
	scanf("%d", &num);
	//num�� stack�� data�� (���� ���ڸ� �ø���) top��°�� �ֱ�
	stack->data[++stack->top] = num;
}

//void pop()
void pop(Stack* stack) {
	if (isEmpty(stack)) {
		printf("stack is underflow\n");
	}
	else {
		stack->data[stack->top--];
	}
}
void printStack(Stack *stack) {
	printf("���罺��:");
	for (int i = 0; i <= stack->top; i++) {
		printf("%d ", stack->data[i]);
	}
	printf("\n");
}


int main() {
	Stack a;
	stacklnit(&a);

	printf("���� ���α׷�\n");
	while (1) {
		printf("1.���� ä��� 2. ���� ���� 3. ��ü ���� 4.����\n");
		int num;
		scanf("%d", &num);
		switch (num){
		case 1:
			push(&a);
			break;
		case 2:
			pop(&a);
			break;
		case 3:
			printStack(&a);
			break;
		case 4:
			return 0;
		default:
			printf("���� �Է� ����\n");
			break;
		}
	}
	return 0;
}