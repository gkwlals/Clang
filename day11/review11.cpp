#include<stdio.h>

int main() {
	//1. 포인터를 이용해서 변수 a를 10 만들기
	
	//int a;
	// int* pa;
	//pa = &a;
	//*pa = 10;
	//printf("%d\n", a);

	//2. 더블포인터를 이용해서 변수 b를 20 만들기
	
	//int b = 20;
	//int* pb;
	//int** ppb;
	//pb = &b;
	//ppb = &pb;
	//printf("%d\n", b);

	//3. 정수형 배열[5]에서 포인터를 사용해 5의 배수 만들기
	
	//int arr[5];
	//int* parr;
	//parr = &arr[0];
	//for (int i = 0; i < 5; i++) {
	//	*(parr + i) = 5 + 5 * i;
	//}


	//4. 정수형 이중배열[3][4]에서 포인터를 사용해서 1~12 채우기
	int arr2[3][4];
	int* parr2;
	parr2 = &arr2[0][0];
	for (int i = 0; i < 12; i++) {
		*(parr2 + i) = i + 1;
	}

	return 0;
}