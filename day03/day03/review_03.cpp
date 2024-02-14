#include<stdio.h>
int main() {
	//int year;
	//printf("태어난 년도를 입력하시오.");
	//scanf("%d", &year);
	//printf("만나이는: %d\n", 2024 - year);
	//int a;
	//printf("첫번째 수를 입력하시오.:");
	//scanf("%d", &a);
	//int b;
	//printf("두번째 수를 입력하시오.:");
	//scanf("%d", &b);
	//int c;
	//printf("세번째 수를 입력하시오:");
	//scanf("%d", &c);
	//printf("세 수의 평균은: %.2lf\n", (a + b + c) / 3);
	// double a;
	// double b;
	// double c;
	// printf("첫번째 수 입력:");
	// scanf("%lf", &a);
	// 
	//int c;
	//printf("섭씨 온도를 입력하시오.:");
	//scanf("%lf", &c);
	//printf("화씨 온도는: %lf\n", c*5.9+32);

	double h, w;
	printf("사용자 키와 몸무게를 입력하시오.:");
	scanf("%lf %lf", &h, &w);

	printf("bmi는 %lf입니다\n", w / (h * h));


	return 0;
}