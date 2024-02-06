//if_else

#include<stdio.h>
int main() {
	//int num;
	//printf("정수입력:");
	//scanf("%d", &num);

	//if (num > 0) {
	//	printf("양수입니다\n");
	//}
	//else if (num == 0) {
	//	printf("0입니다.\n");
	//}
	//else {
	//	printf("음수입니다.\n");
	//}
	//int score;
	//printf("점수입력:");
	//scanf("%d", &score);
	//if (100>= score && score >= 90) {
	//	printf("A입니다\n");
	//}
	//else if (90 > score && score >= 80) {
	//	printf("B입니다\n");
	//}
	//else if (80 > score && score >= 70) {
	//	printf("C입니다\n");
	//}
	//else{
	//	printf("낙제\n");
	//}

	//int a, b, c, m;
	//printf("국어 영어 수학 점수 입력:");
	//scanf("%d %d %d", &a, &b, &c);
	//m = (a + b + c) / 3;
	//	
	//    
	//	if (100 >= m && m >= 90) {
	//		printf("A입니다\n");
	//	}
	//	else if (90 > m && m >= 80) {
	//		printf("B입니다\n");
	//	}
	//	else if (80 > m && m >= 70) {
	//		printf("C입니다\n");
	//	}
	//	else {
	//		printf("낙제\n");
	//	}

	//int num;
	//printf("점수입력:");
	//scanf("%d", &num);

	//if (num > 0) {//중첩 if문(nested if문)
	//	if (num == 10) {
	//		printf("10입니다.");
	//	}
	//	else {
	//		printf("양의 정수입니다.");
	//	}
	//}
	
	//어떤 정수를 입력하면
	// 양의 홀수, 양의 짝수, 0, 음의 홀수, 음의 짝수를 나타내는 프로그램

	int num;
	printf("정수입력:");
	scanf("%d", &num);
	if (num > 0) {
		if (num % 2 == 0) {
			printf("양의 짝수입니다.\n");
		}
		else {
			printf("양의 홀수입니다.\n");
		}
	}
	else if (num < 0) {
		if (num % 2 == 0) {
			printf("음의 짝수입니다.\n");
		}
		else {
			printf("음의 홀수입니다.\n");
		}
	}
	else {
		printf("0입니다\n");
	}
		

	return 0;
}