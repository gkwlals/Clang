#include<stdio.h>
#include<stdlib.h>
//동적 할당 [c언의 마지막 강의]
int main() {
	
	int num;
	printf("원하는 배열의 개수 입력:");
	scanf("%d", &num);

	int* arr;
	arr = (int*)malloc(num * sizeof(int));

	for (int i = 0; i < num; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < num; i++) {
		printf("arr의 %d번: %d\n", i, arr[i]);
	}

	free(arr);

	return 0;
}