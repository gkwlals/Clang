//�빮��>�ҹ���
//�ҹ���>�빮��
#include<stdio.h>
int main() {
	char big;
	printf("�빮�� �Է�:");
	scanf("%c", &big);
	printf("�빮�� %c�� �ҹ��� %c�Դϴ�.", big, big + 32);

	char small;
	printf("�ҹ��� �Է�:");
	scanf("%c", &small);
	printf("�ҹ��� %c�� �빮�� %c�Դϴ�.", small, small- 32);



	return 0;
}