#include<stdio.h>

int main() {
	//1. �����͸� �̿��ؼ� ���� a�� 10 �����
	
	//int a;
	// int* pa;
	//pa = &a;
	//*pa = 10;
	//printf("%d\n", a);

	//2. ���������͸� �̿��ؼ� ���� b�� 20 �����
	
	//int b = 20;
	//int* pb;
	//int** ppb;
	//pb = &b;
	//ppb = &pb;
	//printf("%d\n", b);

	//3. ������ �迭[5]���� �����͸� ����� 5�� ��� �����
	
	//int arr[5];
	//int* parr;
	//parr = &arr[0];
	//for (int i = 0; i < 5; i++) {
	//	*(parr + i) = 5 + 5 * i;
	//}


	//4. ������ ���߹迭[3][4]���� �����͸� ����ؼ� 1~12 ä���
	int arr2[3][4];
	int* parr2;
	parr2 = &arr2[0][0];
	for (int i = 0; i < 12; i++) {
		*(parr2 + i) = i + 1;
	}

	return 0;
}