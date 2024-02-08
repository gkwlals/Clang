#include<stdio.h>

int main() {

	//int a = 1;
	//while (a < 5) {
	//	printf("오늘 설날 전인데 퇴근하죠\n");
	//	a++;
	//}

	//int a = 1;
	//while (1) {
	//	printf("%d\n", a);
	//	if (a == 10) {
	//		break;
	//	}
	//	a++;
	//}


	//유저에게 n을 입력 받고 1~n까지의 정수의 합을 나타내세요
	// while(1)을 사용하세요

	//int n;
	//printf("정수 입력:");
	//scanf("%d", &n);

	//int start = 1;
	//int sum = 0;
	//while (1) {
	//	if (start==n) {
	//		sum += start;
	//			break;
	//	}
	//	sum += start;
	//	start++;
	//}
	//printf("%d\n", sum);


	//1 ~n까지의 n의 약수들 출력하기

	//int n;
	//printf("정수 입력:");
	//scanf("%d", &n);

	//int start = 1;
	//while (start < n) {
	//	if (n % start == 0) {

	//		printf("%d\n", start);
	//	}
	//	start++;
	//}
	//printf("%d\n", start);
	

	// 여러 정수를 입력받고 0을 입력할 때까지 입력한 정수들의 합을 계산하여 출력

	int a = -1;
	int sum = 0;
	while (a!= 0) {
		printf("정수 입력:");
		scanf("%d", &a);
		sum += a;
	}
	printf("%d\n", sum);

	return 0;
}