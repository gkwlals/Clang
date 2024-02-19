#include<stdio.h>
//struct [나만의 데이터 타입(구조체)]
//typedef int Length;
//
typedef struct Coffee {
	char name[30];
	double calories;
	int price;
}Coffee;
//
//typedef struct Sushi {
//	char sushiname[30];
//	char fishname[30];
//	double calories;
//}Sushi;
//
//
//int main() {
//	Coffee americano = { "americano", 5, 2500 };
//	printf("해당 커피의 이름은 %s 칼로리는 %lf 가격은 %d입니다.\n", americano.name, americano.calories, americano.price);
//
//	Sushi salmonsushi = { "salmonsushi", "salmon", 6};
//	printf("해당 스시의 이름은 %s 생선 이름은 %s 칼로리는 %lf\n", salmonsushi.sushiname, salmonsushi.fishname, salmonsushi.calories);



//coffee menu[3]
//여기에 유저의 입력에 따라서 커피 메뉴를 완성하는 프로그램 만들기
int main(){
	//Coffee menu[3] = {
	//	{"아메리카노", 15, 2500},
	//	{"아이스라떼", 215, 3000},
	//	{"바닐라라떼", 355, 3500}
	//};
	////for문을 사용한 메뉴 모두 보여주기
	//for (int i = 0; i < 3; i++) {
	//	printf("이름:%s 칼로리:%2.lf 가격 %d\n", menu[i].name, menu[i].calories, menu[i].price);
	//}

	//유저에게 메뉴 3개 입력 받기
	Coffee menu[3];

	for (int i = 0; i < 3; i++) {
		printf("%d번째 메뉴 입력\n",i);
		printf("%d번째 이름 입력\n",i);
		scanf("%s", &menu[i].name);
		printf("%d번째 칼로리 입력\n",i);
		scanf("%lf", &menu[i].calories);
		printf("%d번째 가격 입력\n",i);
		scanf("%d", &menu[i].price);
		
	}
	return 0;
}