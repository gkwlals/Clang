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
		printf("%d��° �޴� �Է�:", i);
		scanf("%s", &coffee[i]);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d��° �޴��� %s\n:",i, coffee[i]);
	}




	return 0;
}