//������ 1��~9�ܱ��� ��� ����ϴ� ���α׷�

#include<stdio.h>
//int main() {
//	for (int i = 1; i < 10; i++) {
//		for (int j = 1; j < 10; j++) {
//			printf("%d *%d = %d\n", i, j, i * j);
//		}
//	}

//int main(){
//	int N;
//	printf("���� �Է�:");
//	scanf("%d", &N);
//	for (int i = 1; i <= 100; i++) {
//		if (i % n == 0) {
//			printf("%d\n", i);
//		}
//	}

//�������� 2 �̻��� ������ �Է� �ް�
//**
//**

//***
//***
//***

int main() {
	//int n;
	//printf("2�̻��� ���� �Է�:");
	//scanf("%d", &n);
	//for (int i = 0; i < n; i++) {
	//	for (int j = 0; j < n; j++) {
	//		printf("*");
	//	}
	//	printf("\n");
	//}


	int n;
	printf("���� �Է�:");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}




	return 0;
}