#include<stdio.h>

int main() {

	int year;
	printf("�����̼���?");
	scanf("%d", &year);
	printf("���̰� %d�� �̽ñ���.\n", 2024 - year);

	double a,b,c;
	printf("�� ���� �� �Է�:");
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("�� ���� ����� %.2lf�Դϴ�.\n", (a + b + c) / 3);

	double cel;
	printf("������ �Է��ϼ���:");
	scanf("%lf", &cel);
	printf("ȭ���� %.2lf�Դϴ�.\n", cel * 5.9 + 32);

	double m, kg;
	printf("Ű�� �����Ը� �Է�:");
	scanf("%lf %lf", &m, &kg);
	printf("BMI�� %lf �Դϴ�.\n", kg / (m * m));

	return 0;
}