//quiz_02.cpp
#include<stdio.h>

int main() {
	int age;
	printf("����� ���� �Է�:");
	scanf("%d", &age); 
	double height;
	printf("����� Ű �Է�:");
	scanf("%lf", &height);
	int school_number;
	printf("����� �й� �Է�:");
	scanf("%d", &school_number);

	printf("����� ���̴� %d�̰�, ����� Ű�� %.2lf�̰�, �й��� %d�̱���", age, height, school_number);

	return 0;
}