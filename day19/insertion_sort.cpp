#include<stdio.h>

int main() {

	int arr[7] = { 5,1,3,6,7,4,8 };
	for (int i = 1; i < 7; i++) {
		int key = arr[i];
		int j;
		
		for (j = i - 1; j >= 0 && arr[j] > key; j--) {
			arr[j + 1] = arr[j];
		}
		arr[j + 1] = key;
	}
	for (int i = 0; i < 7; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}