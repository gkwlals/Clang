#include<stdio.h>
#include<stdlib.h>
typedef struct Coffee {
	char name[20];
	int price;
	int caffeine;
}Coffee;


int main() {
	//coffee name price caffeine
	//�����Ҵ����� �������� �޴� ������ �����
	// n����ŭ �޴� ä��� �����ֱ�

	int n;
	printf("�޴� ���� �Է�:");
	scanf("%d", &n);
	
	Coffee* menu;
	menu = (Coffee*)malloc(n * sizeof(Coffee));
	
	for (int i = 0; i < n; i++) {
		printf("Ŀ�� �̸� �Է�:");
		scanf("%s", &menu[i].name);
		printf("Ŀ�� ���� �Է�:");
		scanf("%d", &menu[i].price);
		printf("Ŀ�� ī���� �Է�:");
		scanf("%d", &menu[i].caffeine);
	}

	for (int i = 0; i < n; i++) {
		printf("%s %d %d\n", menu[i].name, menu[i].price, menu[i].caffeine);
	}

	return 0;
}