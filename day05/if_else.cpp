//if_else

#include<stdio.h>
int main() {
	//int num;
	//printf("�����Է�:");
	//scanf("%d", &num);

	//if (num > 0) {
	//	printf("����Դϴ�\n");
	//}
	//else if (num == 0) {
	//	printf("0�Դϴ�.\n");
	//}
	//else {
	//	printf("�����Դϴ�.\n");
	//}
	//int score;
	//printf("�����Է�:");
	//scanf("%d", &score);
	//if (100>= score && score >= 90) {
	//	printf("A�Դϴ�\n");
	//}
	//else if (90 > score && score >= 80) {
	//	printf("B�Դϴ�\n");
	//}
	//else if (80 > score && score >= 70) {
	//	printf("C�Դϴ�\n");
	//}
	//else{
	//	printf("����\n");
	//}

	//int a, b, c, m;
	//printf("���� ���� ���� ���� �Է�:");
	//scanf("%d %d %d", &a, &b, &c);
	//m = (a + b + c) / 3;
	//	
	//    
	//	if (100 >= m && m >= 90) {
	//		printf("A�Դϴ�\n");
	//	}
	//	else if (90 > m && m >= 80) {
	//		printf("B�Դϴ�\n");
	//	}
	//	else if (80 > m && m >= 70) {
	//		printf("C�Դϴ�\n");
	//	}
	//	else {
	//		printf("����\n");
	//	}

	//int num;
	//printf("�����Է�:");
	//scanf("%d", &num);

	//if (num > 0) {//��ø if��(nested if��)
	//	if (num == 10) {
	//		printf("10�Դϴ�.");
	//	}
	//	else {
	//		printf("���� �����Դϴ�.");
	//	}
	//}
	
	//� ������ �Է��ϸ�
	// ���� Ȧ��, ���� ¦��, 0, ���� Ȧ��, ���� ¦���� ��Ÿ���� ���α׷�

	int num;
	printf("�����Է�:");
	scanf("%d", &num);
	if (num > 0) {
		if (num % 2 == 0) {
			printf("���� ¦���Դϴ�.\n");
		}
		else {
			printf("���� Ȧ���Դϴ�.\n");
		}
	}
	else if (num < 0) {
		if (num % 2 == 0) {
			printf("���� ¦���Դϴ�.\n");
		}
		else {
			printf("���� Ȧ���Դϴ�.\n");
		}
	}
	else {
		printf("0�Դϴ�\n");
	}
		

	return 0;
}