#include<stdio.h>

int main() {
	char word[4][20] = {
		"korean",
		"japanese",
		"chinese",
		"english"
	};

	//int(*p1)[3];//3ĭ�� ���� �迭 ������
	//p1 = &matrix[0];//ù��° ���� �����Ŵ

	char(*p_word)[20]; //20���� ���� ������ ĳ����
	p_word = &word[0]; //ù��° �� ����
	printf("%s", p_word[0]); //korean
	printf("%s", p_word[1]);

	for (int i = 0; i < 4; i++) {
		printf("%s\n", p_word[i]); //�ѹ��� for�� ���� ��
	}
	return 0;
}