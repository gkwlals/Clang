#include<stdio.h>

int main() {
	char word[4][20] = {
		"korean",
		"japanese",
		"chinese",
		"english"
	};

	//int(*p1)[3];//3칸을 갖는 배열 포인터
	//p1 = &matrix[0];//첫번째 행을 지목시킴

	char(*p_word)[20]; //20글자 갖는 포인터 캐릭터
	p_word = &word[0]; //첫번째 거 넣음
	printf("%s", p_word[0]); //korean
	printf("%s", p_word[1]);

	for (int i = 0; i < 4; i++) {
		printf("%s\n", p_word[i]); //한번에 for문 돌린 것
	}
	return 0;
}