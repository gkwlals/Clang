#include<stdio.h>
int add(int x, int y) {
	return x + y;
}
int minus(int x, int y) {
	return x - y;
}
void hello() {
	printf("�Ƹ޸�ī�� �����.");
}
int main() {
	//f(x): [input & output]
	//printf(),scanf()

	int a = add(10, 20);
	printf("%d", a);

	int b = minus(50, 30);
	printf("%d", b);



	return 0;
}