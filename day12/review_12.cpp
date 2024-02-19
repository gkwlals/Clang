#include<stdio.h>

void swapNumber(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void swapChar(char* c, char* d) {
	char tmp = *c;
	*c = *d;
	*d = tmp;
}

int main() {
	//int swapNumber
	int a = 10, b = 5;
	printf("%d %d\n", a, b); //10 5
	swapNumber(&a, &b);
	printf("%d %d\n", a, b);



	//char swapChar
	char c = 'm', d = 'n';
	printf("%c %c\n", c, d);
	swapChar(&c, &d);
	printf("%c %c\n", c, d);


	return 0;
}