#include<stdio.h>
typedef struct Ingredient {
	int shot;
	int caffeine;
	int milk;
}Ingredient;


typedef struct Coffee{
	char name[20];
	int price;
	Ingredient ingredient;
}Coffee;

//��� �޴��� �����ִ� �Լ�
void showMenu(Coffee* menu, int size) {
	printf("=====�̵�� �޴�=====\n");
	for (int i = 0; i < size; i++) {
		printf("%d. %s - %d\n", i + 1, (menu + i)->name, (menu + i)->price);
		printf("Shots:%d, Caffeine: %d mg, Milk:%d ml\n", (menu + i)->ingredient.shot, (menu + i)->ingredient.caffeine, (menu + i)->ingredient.milk);
	}

};


//�޴��� ���Ӱ� ����ϴ� �Լ�
void addMenu(Coffee* menu, int*size) {
	printf("�޴� �̸� �Է�:");
	scanf("%s", &menu[*size].name);
	printf("�޴� ���� �Է�:");
	scanf("%d", &menu[*size].price);
	printf("�޴� ī�����Է� �Է�:");
	scanf("%d", &menu[*size].ingredient.caffeine);
	printf("�޴� �����Է� �Է�:");
	scanf("%d", &menu[*size].ingredient.milk);
	printf("�޴� �� �Է� �Է�:");
	scanf("%d", &menu[*size].ingredient.shot);
	*size += 1;
}


int main() {
	int size = 3;
	Coffee menu[10] = {
		{"americano",3500,{2,100,0}},
		{"latte",4000,{2,100,100}},
		{"mocha",4500,{2,50,50}},
	};
	showMenu(&menu[0], size);
	addMenu(&menu[0], &size);
	showMenu(&menu[0], size);

	return 0;
}