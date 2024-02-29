#include<stdio.h>

int main() {
	int arr[9] = { 7,9,2,21,30,19,18,23,11 };
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 8 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	for (int i = 0; i < 9; i++) {
		printf("%d ", arr[i]);
	}


	return 0;
}