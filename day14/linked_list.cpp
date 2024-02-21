#include<stdio.h>
typedef struct Node {
	int data;
	struct Node* next;
}Node;

int main() {

	Node a, b, c, d, e;
	a.data = 10;
	a.next = &b;
	b.data = 20;
	b.next = &c;
	c.data = 30;
	c.next = &d;
	d.data = 40;
	d.next = &e;
	e.data = 50;
	e.next = NULL;
	
	Node* target;
	target = &a;
	while (target != NULL) {
		printf("%d->", target->data);
		target = target->next;
	}

	/*printf("%d %d %d", a.data, a.next->data, a.next->next->data);*/




	return 0;
}