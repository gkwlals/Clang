#include<stdio.h>

int main() {

	int year;
	printf("몇년생이세요?");
	scanf("%d", &year);
	printf("나이가 %d살 이시군요.\n", 2024 - year);

	double a,b,c;
	printf("세 개의 수 입력:");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("세 수의 평균은 %.2lf입니다.\n", (a + b + c) / 3);

	double cel;
	printf("섭씨를 입력하세요:");
	scanf("%lf", &cel);
	printf("화씨는 %.2lf입니다.\n", cel * 5.9 + 32);

	double m, kg;
	printf("키와 몸무게를 입력:");
	scanf("%lf %lf", &m, &kg);
	printf("BMI는 %lf 입니다.\n", kg / (m * m));

	return 0;
}