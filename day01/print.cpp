//print.cpp
#include<stdio.h>

int main() {

	//printf("안녕하세요\n");
	//printf("저는 하지민입니다.\n");
	//printf("c언어를 배우는 이유는 기본 언어여서 입니다.\n");
	//printf("오늘 점심은 샌드위치를 먹을 거에요.\n");
	//printf("오늘 학원 올 때, 지하철 타고 왔습니다.");

	//서식 지정자
	//%d - decimal(정수)
	printf("1 + 3 = %d\n", 1 +3);
	printf("12345 + 98765 = %d \n", 12345 + 98765);
	printf("100 + 200 = %d\n", 100 + 200);

	//%lf or %f - 실수
	//%.xlf x자리까지만 보여주기
	printf("1.5+3.5 = %.2lf\n", 1.5 + 3.5);
	printf("3.14 * 5 = %.2lf\n", 3.14 * 5);

	//%c - 문자 하나(홑따옴표 필수)
	printf("%c\n", 'k');

	//%s - 문자열(문자 두개 이상, 쌍따옴표 필수)
	printf("%s\n", "americano");




	return 0;
}