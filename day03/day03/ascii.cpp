#include <stdio.h>
int main() {
	//char alpha = 'a';
	//printf("alpha: %c\n", alpha);
	//printf("alpha: %d\n", alpha);
	//char alpha;
	//printf("�ҹ��ڸ� �Է��Ͻÿ�:");
	//scanf("%c", &alpha);
	//printf("%c�� ������ %d�Դϴ�", alpha, alpha-97);
	//int num;
	//printf("0~25 ���� �Է�:");
	//scanf("%d", &num);
	//printf("%d��° �빮�ڴ� %c�Դϴ�.", num, num +65);
	char small_alpha, big_alpha;
	printf("�ҹ��ڸ� �Է��Ͻÿ�:");
	scanf("%c", &small_alpha);
	getchar();
	printf("�빮�ڴ� %c�Դϴ�", small_alpha-32);
	printf("�빮�ڸ� �Է��Ͻÿ�:");
	scanf("%c", &big_alpha);
	getchar();
	printf("�빮�ڴ� %c�Դϴ�", big_alpha + 32);
	

	return 0;
}
