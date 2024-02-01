//quiz_02.cpp
#include<stdio.h>

int main() {
	int age;
	printf("당신의 나이 입력:");
	scanf("%d", &age); 
	double height;
	printf("당신의 키 입력:");
	scanf("%lf", &height);
	int school_number;
	printf("당신의 학번 입력:");
	scanf("%d", &school_number);

	printf("당신의 나이는 %d이고, 당신의 키는 %.2lf이고, 학번은 %d이군요", age, height, school_number);

	return 0;
}