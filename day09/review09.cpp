#include<stdio.h>

int main() {
	//�� �� �� ���� �迭
	//1 50 80 90
	//2 60 70 70
	//3 70 70 80
	//4 90 90 100

	//1. �л����� ������ ������ ��Ÿ����
	//2. ���� ���� ����� ���ϱ�

	int score[4][3] = { 
		{50, 80, 90}, {60, 70, 70}, {70, 70, 80}, {90, 90, 100} 
	};

	int sumMath = 0;
	for (int i = 0; i < 4; i++) {
		printf("%d��° �л�:", i);
		for (int j = 0; i < 3; j++) {
			if (j == 0) {
				printf("���� ����:%d", score[i][j]);
			}
			if (j == 1) {
				printf("���� ����:%d", score[i][j]);
			}
			if (j == 2) {
				printf("���� ����:%d", score[i][j]);
				sumMath += score[i][j];
			}
		}
		printf("\n");
	}
	printf("������ ���:")//���� ����


	return 0;
}