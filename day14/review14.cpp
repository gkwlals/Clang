#include<stdio.h>
#include<stdlib.h>
typedef struct Coffee {
	char name[20];
	int price;
	int caffeine;
}Coffee;


int main() {
	//coffee name price caffeine
	//동적할당으로 유저에게 메뉴 개수를 물어보고
	// n개만큼 메뉴 채우고 보여주기

	int n;
	printf("메뉴 개수 입력:");
	scanf("%d", &n);
	
	Coffee* menu;
	menu = (Coffee*)malloc(n * sizeof(Coffee));
	
	for (int i = 0; i < n; i++) {
		printf("커피 이름 입력:");
		scanf("%s", &menu[i].name);
		printf("커피 가격 입력:");
		scanf("%d", &menu[i].price);
		printf("커피 카페인 입력:");
		scanf("%d", &menu[i].caffeine);
	}

	for (int i = 0; i < n; i++) {
		printf("%s %d %d\n", menu[i].name, menu[i].price, menu[i].caffeine);
	}

	return 0;
}