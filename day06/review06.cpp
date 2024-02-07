//정수를 입력 받고 현재 온도 상태 표시
//두 개의 양의 정수를 입력 받아 제곱관계를 출력하는 프로그램
//5개의 정수를 입력 받아, 양수인 수들의 합을 구하는 프로그램
// 큰 수와 나머지 몫 계산

#include<stdio.h>
int main() {
	int num;
	printf("온도 입력:");
	scanf("%d", &num);
	if (num < 0) {
		printf("추우므로 실내활동 권장\n");
	}
	else if (num >= 0 && num <= 40) {
			printf("쾌적하므로 실외활동 권장\n");
		}
	else {
			printf("더우므로 실내활동 권장\n");
		} //문구 있는대로 하지 말고 실외활동 권장을 마지막에 하는 게 이득
	

	
	int a, b;
	printf("두 개의 정수 입력:");
	scanf("%d %d", &a, &b);
	if (a*a == b) {
		printf("%d*%d =%d\n", a,a,b);
	}
	else if (b* b == a) {
		printf("%d*%d =%d\n", b, b, a);
	}
	else {
		printf("none\n");
	}



	int a, b, c, d, e;
	int total = 0;
	printf("5개의 정수 입력:");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a > 0) total += a;
	if (b > 0) total += b;
	if (c > 0) total += c;
	if (d > 0) total += d;
	if (e > 0) total += e;
	printf("총합: %d", total);
	return 0;
}