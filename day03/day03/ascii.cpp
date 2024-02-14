#include <stdio.h>
int main() {
	//char alpha = 'a';
	//printf("alpha: %c\n", alpha);
	//printf("alpha: %d\n", alpha);
	//char alpha;
	//printf("소문자를 입력하시오:");
	//scanf("%c", &alpha);
	//printf("%c의 순서는 %d입니다", alpha, alpha-97);
	//int num;
	//printf("0~25 정수 입력:");
	//scanf("%d", &num);
	//printf("%d번째 대문자는 %c입니다.", num, num +65);
	char small_alpha, big_alpha;
	printf("소문자를 입력하시오:");
	scanf("%c", &small_alpha);
	getchar();
	printf("대문자는 %c입니다", small_alpha-32);
	printf("대문자를 입력하시오:");
	scanf("%c", &big_alpha);
	getchar();
	printf("대문자는 %c입니다", big_alpha + 32);
	

	return 0;
}
