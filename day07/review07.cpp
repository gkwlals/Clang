//구구단 1단~9단까지 모두 출력하는 프로그램

#include<stdio.h>
//int main() {
//	for (int i = 1; i < 10; i++) {
//		for (int j = 1; j < 10; j++) {
//			printf("%d *%d = %d\n", i, j, i * j);
//		}
//	}

//int main(){
//	int N;
//	printf("정수 입력:");
//	scanf("%d", &N);
//	for (int i = 1; i <= 100; i++) {
//		if (i % n == 0) {
//			printf("%d\n", i);
//		}
//	}

//유저한테 2 이상의 정수를 입력 받고
//**
//**

//***
//***
//***

int main() {
	//int n;
	//printf("2이상의 정수 입력:");
	//scanf("%d", &n);
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	int n;
	printf("정수 입력:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}




	return 0;
}