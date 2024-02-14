#include<stdio.h>

int main() {
	
	//char megastudy[4][10] = {
	//	"math",
	//	"english",
	//	"korean",
	//	"computer",
	//};
	//printf("%s\n", megastudy[0]);
	//printf("%s\n", megastudy[1]);


	char coffee[3][20];
	for (int i = 0; i < 3; i++) {
		printf("%d번째 메뉴 입력:", i);
		scanf("%s", &coffee[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d번째 메뉴는 %s\n:",i, coffee[i]);
	}




	return 0;
}