//���(control_statement) [�ڵ带 ��Ʈ����]
// 1. ���ǹ�(if switch)[���ǿ� ���� �ڵ� ����]
// 2. �ݺ���(for, while)[�ڵ带 n�� ����]
//for
#include<stdio.h>
int main() {
	//for (int i = 0; i < 10; i++) {
	//	printf("%d\n", i);
	//}

	//int num;
	//printf("���� �Է�:");
	//scanf("%d", &num);
	//for (int i = 1; i < num; i++) {
	//	printf("%d\n", i);
	//}

	//int n;
	//int total=0;
	//printf("���� �Է�:");
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++) {
	//	total += i;
	//}
	//printf("total: %d", total);

	//1. ������ �Է¹޾� ������ ��� 5*1=5, 5*2=10, ...
	//2. ���� ���ĺ��� ������� ���

	//int n;
	//printf("���� �Է�:");
	//scanf("%d", &n);
	//for (int i = 1; i <= n; i++) {
	//	printf("%d * %d = %d\n", n, i, n*i);
	//}


	//for (int i = 65; i <= 90; i++) {
	//	printf("%c %c\n", i, i+32);
	//}
	//
	
	
	//for (int i = 0; i < 10; i++) {
	//	if (i == 7) {
	//		//break; // for�� Ż��
	//		continue; //for�� ����
	//	}
	//	printf("%d", i);
	//}


	//A~K, O~Z ����ϴ� ���α׷�
	
	//for (int i = 65; i <= 90; i++) {
	//	if (i > 75 && i<79) {
	//		continue;
	//	}
	//	printf("%c ", i);
	//}


	//for (int i = 0; i < 3; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		printf("i: %d, j: %d\n", i, j);
	//	}
	//}


	//1�� ~9�� ������ ����ϴ� ���α׷� 
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d *%d = %d\n", i, j, i * j);
		}
	}


	return 0;
}