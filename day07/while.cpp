#include<stdio.h>

int main() {

	//int a = 1;
	//while (a < 5) {
	//	printf("���� ���� ���ε� �������\n");
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


	//�������� n�� �Է� �ް� 1~n������ ������ ���� ��Ÿ������
	// while(1)�� ����ϼ���

	//int n;
	//printf("���� �Է�:");
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


	//1 ~n������ n�� ����� ����ϱ�

	//int n;
	//printf("���� �Է�:");
	//scanf("%d", &n);

	//int start = 1;
	//while (start < n) {
	//	if (n % start == 0) {

	//		printf("%d\n", start);
	//	}
	//	start++;
	//}
	//printf("%d\n", start);
	

	// ���� ������ �Է¹ް� 0�� �Է��� ������ �Է��� �������� ���� ����Ͽ� ���

	int a = -1;
	int sum = 0;
	while (a!= 0) {
		printf("���� �Է�:");
		scanf("%d", &a);
		sum += a;
	}
	printf("%d\n", sum);

	return 0;
}