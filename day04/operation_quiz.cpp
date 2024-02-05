//operation_quiz.cpp
//1. 자릿수 분리하기
// 0부터 99999 사이의 정수를 입력받아, 그 숫자의 각 자리수를 분리하여 출력하는 프로그램을 작성해보세요
// 12345>1만2천3백4십5
// 2016> 0만2천0백1십6
#include<stdio.h>
int main() {
	/*int a;
	printf("정수입력:");
	scanf("%d", &a);
	printf("%d만%d천%d백%d십%d", a / 10000, (a / 1000) % 10, (a / 100) % 10, (a / 10) % 10, (a / 1) % 10);*/
	int main() {
		int num, one, ten, hundred, thousands, ten_thousands;
		printf("정수입력(0~99999):");
		scanf("%d", &num);
		ten_thousands = num / 10000;
		thousands = (num % 10000) / 1000;
		hundred = (num % 1000) / 100;
		ten = (num % 100) / 10;
		one = (num % 10);
		printf("%d만%d천%d백%d십%d", ten_thousands, thousands, hundred, ten, one);
	}
	int time, min, sec;
	printf("시간입력:");
	scanf("%d", &time);

	min = time / 60;
	sec = time % 60;
	printf("%d분%d초\n", min, sec);
	return 0;

	return 0;
}

//2. 시간 형태로 변환하기
// 양의 정수를 입력받아, 그 숫자를 시간(분:초) 형태로 변환하여 출력하는 프로그램을 작성해보세요.
// 661이면 11분 1초로 변환합니다.
#include<stdio.h>
int main() {
	int a;
	printf("시간 입력":);
	scanf("%d", &a);
	printf("%d분%d초")




	return 0;
}