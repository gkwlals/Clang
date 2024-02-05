//대문자>소문자
//소문자>대문자
#include<stdio.h>
int main() {
	char big;
	printf("대문자 입력:");
	scanf("%c", &big);
	printf("대문자 %c는 소문자 %c입니다.", big, big + 32);

	char small;
	printf("소문자 입력:");
	scanf("%c", &small);
	printf("소문자 %c는 대문자 %c입니다.", small, small- 32);



	return 0;
}