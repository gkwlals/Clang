#include<stdio.h>

void swap(int *x, int *y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
void swap1(char* c, char* d) {
	char tmp = *c;
	*c = *d;
	*d = tmp;
}

int main() {
	int a = 10, b = 5;
	printf("%d %d\n", a, b); //10 5
	swap(&a, &b);
	
	printf("%d %d\n", a, b);

	char c = 'm', d = 'n';
	printf("%c %c\n", c, d);
	swap1(&c, &d);
	printf("%c %c\n", c, d);
	return 0;
}