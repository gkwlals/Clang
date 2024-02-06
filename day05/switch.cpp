#include<stdio.h>
int main() {
	//switch
	//int num;
	//printf("숫자 입력:");
	//scanf("%d", &num);

	//switch(num) {
	//case 1:
	//	printf("아메리카노 주문\n");
	//	break;
	//case 2:
	//	printf("라떼 주문\n");
	//	break;
	//case 3:
	//	printf("바닐라 주문\n");
	//	break;
	//default:
	//	printf("해당 음료 없습니다.\n");
	//	break;
	//}


	// 유저한테 1~12월을 입력하고
	// 1~3: 봄, 4~6: 여름 7~9:가을 10~12:겨울이라는 프로그램 만들기
	int month;
	printf("월 입력:");
	scanf("%d", &month);
	switch (month) {
	case 1:
			printf("봄\n");
			break;
	case 2:
		    printf("봄\n");
		    break;
	case 3:
		printf("봄\n");
		break;
	default:
		printf("숫자 입력 오류:"\n);
		break;
	}


	return 0;
}