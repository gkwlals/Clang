#include<stdio.h>
int main() {
	//int eng_score[3] = { 50, 60, 80 };
	//int math_score[3] = { 70, 60, 90 };

	//int a[2] = { 1,2 };
	//int b[2][3] = { {1,2,3}, {4,5,6} }; //���� ���� �ְ� �ΰ� �ִ� ��
	//int score[2][3] = { {50, 60, 80}, { 70, 60, 90 } };


	//printf("%d ", b[0][0]);
	//printf("%d ", b[0][1]);

	//int mathSum;
	//int engSum;
	//for (int i = 0; i < 2; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		if (i == 0) {
	//			engSum += score[i][j];

	//		}
	//		else {
	//			mathSum += score[i][j];
	//		}
	//	}
	//}
	//printf("���� ����:%d, ���� ����: %d", engSum, mathSum);

	//�� �� �� Ž
	int score[3][4] = {
		{70,80,80,80},
		{60,70,50,40},
		{70,50,80,60},
	};
	
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		sum += score[i][3];
	}
	printf("Ž���� ����� %d�Դϴ�.\n", sum / 3);
	return 0;
}