//operation_quiz.cpp
//1. �ڸ��� �и��ϱ�
// 0���� 99999 ������ ������ �Է¹޾�, �� ������ �� �ڸ����� �и��Ͽ� ����ϴ� ���α׷��� �ۼ��غ�����
// 12345>1��2õ3��4��5
// 2016> 0��2õ0��1��6
#include<stdio.h>
int main() {
	/*int a;
	printf("�����Է�:");
	scanf("%d", &a);
	printf("%d��%dõ%d��%d��%d", a / 10000, (a / 1000) % 10, (a / 100) % 10, (a / 10) % 10, (a / 1) % 10);*/
	int main() {
		int num, one, ten, hundred, thousands, ten_thousands;
		printf("�����Է�(0~99999):");
		scanf("%d", &num);
		ten_thousands = num / 10000;
		thousands = (num % 10000) / 1000;
		hundred = (num % 1000) / 100;
		ten = (num % 100) / 10;
		one = (num % 10);
		printf("%d��%dõ%d��%d��%d", ten_thousands, thousands, hundred, ten, one);
	}
	int time, min, sec;
	printf("�ð��Է�:");
	scanf("%d", &time);

	min = time / 60;
	sec = time % 60;
	printf("%d��%d��\n", min, sec);
	return 0;

	return 0;
}

//2. �ð� ���·� ��ȯ�ϱ�
// ���� ������ �Է¹޾�, �� ���ڸ� �ð�(��:��) ���·� ��ȯ�Ͽ� ����ϴ� ���α׷��� �ۼ��غ�����.
// 661�̸� 11�� 1�ʷ� ��ȯ�մϴ�.
#include<stdio.h>
int main() {
	int a;
	printf("�ð� �Է�":);
	scanf("%d", &a);
	printf("%d��%d��")




	return 0;
}