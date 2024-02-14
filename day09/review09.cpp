#include<stdio.h>

int main() {
	//국 영 수 점수 배열
	//1 50 80 90
	//2 60 70 70
	//3 70 70 80
	//4 90 90 100

	//1. 학생별로 국영수 점수를 나타내기
	//2. 수학 점수 평균을 구하기

	int score[4][3] = { 
		{50, 80, 90}, {60, 70, 70}, {70, 70, 80}, {90, 90, 100} 
	};

	int sumMath = 0;
	for (int i = 0; i < 4; i++) {
		printf("%d번째 학생:", i);
		for (int j = 0; i < 3; j++) {
			if (j == 0) {
				printf("국어 점수:%d", score[i][j]);
			}
			if (j == 1) {
				printf("영어 점수:%d", score[i][j]);
			}
			if (j == 2) {
				printf("수학 점수:%d", score[i][j]);
				sumMath += score[i][j];
			}
		}
		printf("\n");
	}
	printf("수학의 평균:")//여기 수정


	return 0;
}