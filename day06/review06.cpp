//������ �Է� �ް� ���� �µ� ���� ǥ��
//�� ���� ���� ������ �Է� �޾� �������踦 ����ϴ� ���α׷�
//5���� ������ �Է� �޾�, ����� ������ ���� ���ϴ� ���α׷�
// ū ���� ������ �� ���

#include<stdio.h>
int main() {
	int num;
	printf("�µ� �Է�:");
	scanf("%d", &num);
	if (num < 0) {
		printf("�߿�Ƿ� �ǳ�Ȱ�� ����\n");
	}
	else if (num >= 0 && num <= 40) {
			printf("�����ϹǷ� �ǿ�Ȱ�� ����\n");
		}
	else {
			printf("����Ƿ� �ǳ�Ȱ�� ����\n");
		} //���� �ִ´�� ���� ���� �ǿ�Ȱ�� ������ �������� �ϴ� �� �̵�
	

	
	int a, b;
	printf("�� ���� ���� �Է�:");
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
	printf("5���� ���� �Է�:");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a > 0) total += a;
	if (b > 0) total += b;
	if (c > 0) total += c;
	if (d > 0) total += d;
	if (e > 0) total += e;
	printf("����: %d", total);
	return 0;
}