#include<stdio.h>

//배열 기반으로 한 스택
typedef struct Stack {
	int top; // 현재 위치 [엘레베이터]
	int data[100];
}Stack;

void stacklnit(Stack* stack) {
	stack->top = -1;
}


//isEmpty 비어 있으면 비어있습니다 아니면 현재 top은 ~입니다.
int isEmpty(Stack* stack) {
	return (stack->top == -1);
}

void push(Stack* stack) {
	int num;
	printf("숫자 입력:");
	scanf("%d", &num);
	//num을 stack의 data의 (먼저 숫자를 올리고) top번째에 넣기
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
	printf("현재스택:");
	for (int i = 0; i <= stack->top; i++) {
		printf("%d ", stack->data[i]);
	}
	printf("\n");
}


int main() {
	Stack a;
	stacklnit(&a);

	printf("스택 프로그램\n");
	while (1) {
		printf("1.스택 채우기 2. 스택 비우기 3. 전체 보기 4.종료\n");
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
			printf("숫자 입력 오류\n");
			break;
		}
	}
	return 0;
}