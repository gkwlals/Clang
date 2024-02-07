//제어문(control_statement) [코드를 컨트롤함]
// 1. 조건문(if switch)[조건에 의해 코드 실행]
// 2. 반복문(for, while)[코드를 n번 실행]
//for
#include<stdio.h>
int main() {
	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", i);
	//}

	//int num;
	//printf("숫자 입력:");
	//scanf("%d", &num);
	//for (int i = 1; i < num; i++) {
	//	printf("%d\n", i);
	//}

	//int n;
	//int total=0;
	//printf("숫자 입력:");
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++) {
	//	total += i;
	//}
	//printf("total: %d", total);

	//1. 정수를 입력받아 구구단 출력 5*1=5, 5*2=10, ...
	//2. 영어 알파벳을 순서대로 출력

	//int n;
	//printf("정수 입력:");
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++) {
	//	printf("%d * %d = %d\n", n, i, n*i);
	//}


	//for (int i = 65; i <= 90; i++) {
	//	printf("%c %c\n", i, i+32);
	//}
	//
	
	
	//for (int i = 0; i < 10; i++) {
	//	if (i == 7) {
	//		//break; // for문 탈출
	//		continue; //for문 점프
	//	}
	//	printf("%d", i);
	//}


	//A~K, O~Z 출력하는 프로그램
	
	//for (int i = 65; i <= 90; i++) {
	//	if (i > 75 && i<79) {
	//		continue;
	//	}
	//	printf("%c ", i);
	//}


	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		printf("i: %d, j: %d\n", i, j);
	//	}
	//}


	//1단 ~9단 구구단 출력하는 프로그램 
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d *%d = %d\n", i, j, i * j);
		}
	}


	return 0;
}