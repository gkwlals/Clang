//ascii
#include<stdio.h>
int main() {

	//char alpha = 'a';
	//printf("alpha: %c\n", alpha);
	//printf("alpha: %d\n", alpha);

	//1. ���ĺ� �ҹ��ڸ� �Է� ��,
	//���ĺ��� ���� ��Ÿ���� ���α׷�
	//ex) a -> a�� ������ 0�Դϴ�. 
	//    c -> c�� ������ 2�Դϴ�.
	//char alpha;
	//printf("�ҹ��� ���ĺ� �Է�:");
	//scanf("%c", &alpha);
	//printf("%c�� ������ %d�Դϴ�.", alpha, alpha-97);

	//2. ������ (0~25)�Է���
	// ������ ���� ���ĺ� ��Ÿ���� ���α׷�
	//ex) 0 -> 0��° �빮�ڴ� A�Դϴ�.
	//ex) 1 -> 1��° �빮�ڴ� B�Դϴ�.
	//int num;
	//printf("0~25 ���� �Է�:");
	//scanf("%d", &num);
	//printf("%d��° �빮�ڴ� %c�Դϴ�", num, num+65);


	// �ҹ��ڸ� �Է� -> �빮�ڷ� ���
	// �Է�: a -> ���: A

	char small_alpha, big_alpha;
	printf("�ҹ��� �Է�:");
	scanf("%c", &small_alpha);
	getchar();
	printf("�빮�ڴ� %c�Դϴ�.\n", small_alpha - 32);

	printf("�빮�� �Է�:");
	scanf("%c", &big_alpha);
	getchar();
	printf("�ҹ��ڴ� %c�Դϴ�.", big_alpha + 32);




	return 0;
}