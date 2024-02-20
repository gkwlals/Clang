#include<stdio.h>
typedef struct Coffee {
	char name[20];
	int price;
	char size[20];
	int caffeine;
}Coffee;

void raisePrice(Coffee* coffee) {
	coffee->price += 1000;
}

void downPrice(Coffee* coffee) {
	coffee->price -= 1000;
}

void showinfo(Coffee*coffee) {
	printf("%s %d %s %d", coffee->name, coffee->price, coffee->size, coffee->caffeine);
}
int main() {


	Coffee a = { "americano", 4500, "tall", 100 };
	//Coffee* pCoffee;
	//pCoffee = &a;
	//pCoffee->price += 1000;
	//printf("이름:%s 가격:%d", a.name, a.price);



	//raiseprice
	raisePrice(&a);
	raisePrice(&a);
	raisePrice(&a);
	raisePrice(&a);
	showinfo(&a);




	return 0;
}
