//quiz_03

#include<stdio.h>

int main() {
	int month;
	printf("�� �Է�:");
	scanf("%d", &month);
	getchar();
	int date;
	printf("�� �Է�:");
	scanf("%d", &date);
	getchar();
	printf("����� ������ %d�� %d�� �̱���!\n", month, date);
	
	char alpha;
	printf("���ĺ� �Է�:");
	scanf("%c", &alpha);
	printf("%c%c%c\n", alpha, alpha, alpha);
	printf("%c %c\n", alpha, alpha, alpha);
	printf("%c%c%c\n", alpha, alpha, alpha);
    

	return 0;

}